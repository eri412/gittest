#include <stdio.h>
#include "stack.h"

int main() {
	printf("Hello, World!\n");
	Stack *test = NULL;
	
	printf("peek empty stack: %d\n", stack_peek(test));
	printf("pop empty stack: %d\n", stack_pop(&test));
	printf("push 1 onto stack: %d\n", stack_push(&test, 1));
	printf("peek: %d\n", stack_peek(test));
	printf("push 10 onto stack: %d\n", stack_push(&test, 10));
	printf("peek: %d\n", stack_peek(test));
	printf("push -100 onto stack: %d\n", stack_push(&test, -100));
	printf("peek: %d\n", stack_peek(test));
	printf("poping the stack entirely: %d %d %d %d", stack_pop(&test), stack_pop(&test), stack_pop(&test), stack_pop(&test)); // UB but who cares
	
	return 0;
}