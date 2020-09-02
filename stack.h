// list-based stack of integers

#ifndef __STACK_H__
#define __STACK_H__

typedef struct Stack{
	int data;
	struct Stack *next;
} Stack;

int stack_push(Stack **subj, int data);
int stack_pop(Stack **subj);
int stack_peek(Stack *subj);

#endif
