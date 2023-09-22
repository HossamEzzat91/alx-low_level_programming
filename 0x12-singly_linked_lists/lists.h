#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
/**
 * struct list - singly linked list
 * @str : string
 * @len : string lenght
 * @next : pointer to the next node
 */
typedef struct list
{
char *str;
unsigned int len;
struct list *next;
} list_t;
size_t print_list(const list_t *h);
#endif
