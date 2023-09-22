#ifndef lists_h
#define lists_h

/**
 * struct list_s - The singly linked list
 * @str: string the is allocated memory
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: Holberton project's singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head)
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
