/**
 * hash_djb2 - The djb2 algorithm.
 * @str: Hash values generation string.
 *
 * Return: Hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashValue;
	int c;

	hashValue = 5381;
	while ((c = *str++))
	{
		hashValue = ((hashValue << 5) + hashValue) + c;
	}
	return (hashValue);
}
