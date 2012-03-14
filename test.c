#include<stdio.h>
#include"stack.h"

int main()
{
  STACK *s=NULL;
  push(&s, 1);
  push(&s, 2);
  while(!empty(s))
    {
      pop(&s);
      printf("x");
    }
  return 0;
}
