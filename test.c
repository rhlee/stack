#include<stdio.h>
#include"stack.h"

int main()
{
  STACK *s=NULL;
  char *i;
  push(&s, (void *)"kll");
  push(&s, (void *)"lll");
  while(!empty(s))
    {
      i = (char *)pop(&s);
      printf("x%s",i);
    }
  return 0;
}
