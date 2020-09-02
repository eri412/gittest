#include <stdlib.h>
#include <limits.h>
#include "stack.h"

int stack_push(Stack **subj, int data) {
	Stack *temp = malloc(sizeof(Stack));
	if (temp == NULL) {
		return 1;
	}
	temp->data = data;
	temp->next = *subj;
	*subj = temp;
	return 0;
}

int stack_pop(Stack **subj) {
	if (*subj == NULL) {
		return 1;
	}
	Stack *temp = (*subj)->next;
	free(*subj);
	*subj = temp;
	return 0;
}

int stack_peek(Stack *subj) {
	if (subj == NULL) {
		return INT_MIN;
	}
	return subj->data;
}
