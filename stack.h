#include "struct.h"

typedef struct stack STACK;

void push(STACK **head, void *value);
int empty(STACK *head);
void *pop(STACK **head);

#include "stack.c"
