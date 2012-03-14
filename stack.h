typedef struct stack {
  int data;
  struct stack *next;
} STACK;

int empty(STACK *);

#include "stack.c"
