typedef struct stack {
  void *data;
  struct stack *next;
} STACK;

void push(STACK **head, void *value);
int empty(STACK *head);
void *pop(STACK **head);

#include "stack.c"
