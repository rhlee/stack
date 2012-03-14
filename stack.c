#include "stdlib.h"

void push(STACK **head, int value)
{
  STACK *node = malloc(sizeof(STACK));  /* create a new node */
 
  if (node == NULL){
    fputs("Error: no space available for node\n", stderr);
    abort();
  } else {                                      /* initialize node */
    node->data = value;
    node->next = empty(*head) ? NULL : *head; /* insert new head if any */
    *head = node;
  }
}

int empty(STACK *head)
{
  return head == NULL;
}

int pop(STACK **head)
{
  if (empty(*head)) {                          /* stack is empty */
    fputs("Error: stack underflow\n", stderr);
    abort();
  } else {                                     /* pop a node */
    STACK *top = *head;
    int value = top->data;
    *head = top->next;
    free(top);
    return value;
  }
}
