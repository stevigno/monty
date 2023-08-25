#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack
 * struct for stack, queues, LIFO, FIFO
 * @n: integer struct
 * @prev: points to the previous element of the stack struct
 * @next: points to the next element of the stack struct
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO struct
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} my_stack_t;

/**
 * struct instruction_s - opcode and its function struct
 * @opcode: the opcode struct
 * @f: function to handle the opcode struct
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO struct
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(my_stack_t **stack, unsigned int line_number);
} instruction_t;


typedef struct cat_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  cat_t;
extern cat_t cat;

int core(char *content_in_f, my_stack_t **stack, unsigned int count,FILE *file_is_r);
void errors(my_stack_t *h);
void _push_M(my_stack_t **h, unsigned int count);
void _pall_S(my_stack_t **head, unsigned int count);
void node_in_stack(my_stack_t **h, int n_v);
void add_in_queue(my_stack_t **head, int n);

#endif
