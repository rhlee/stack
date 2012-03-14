typedef struct stack {
  void *data;
  struct stack *next;
} STACK;

int empty(STACK *);

#include "stack.c"
