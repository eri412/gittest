#include <stdio.h>
#include "stack.h"
#include "helloworld.h"

int main() {
	hello_world();
	Stack *test = NULL;
	
	printf("peek empty stack: %d\n", stack_peek(test));
	printf("pop empty stack: %d\n", stack_pop(&test));
	printf("push 1 onto stack: %d\n", stack_push(&test, 1));
	printf("peek: %d\n", stack_peek(test));
	printf("push 10 onto stack: %d\n", stack_push(&test, 10));
	printf("peek: %d\n", stack_peek(test));
	printf("push -100 onto stack: %d\n", stack_push(&test, -100));
	printf("peek: %d\n", stack_peek(test));
	printf("poping the stack entirely: %d %d %d %d\n", stack_pop(&test), stack_pop(&test), stack_pop(&test), stack_pop(&test)); // UB but who cares
	
	printf("Bye, World!\n");
	
	return 0;
}
