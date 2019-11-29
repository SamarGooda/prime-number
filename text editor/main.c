#include <stdio.h>
#include <stdlib.h>
int lent (char arr[]);
int main()
{ char n[10];
char num=0;
 printf("please enter the string \n ");
 gets(n);
 num=lent(n);
 printf("  the lenght %d ",num);
    return 0;
}
int lent (char arr[])
{  int i=0;
  while(arr[i]!='\0')
  {
      i++;
  }
    return i;
}
