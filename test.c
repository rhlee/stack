#include<stdio.h>
#include"stack.h"

int main()
{
  STACK *s=NULL;
  int *i;
  int j=123;
  i=&j;
  push(&s, (void *)i);
  while(!empty(s))
    {
      i = (int *)pop(&s);
      printf("x%d",*i);
    }
  return 0;
}
