#include <stdio.h>
#include <stdlib.h>
int calculate(int ,int ,char);


int main()
{
      char op;
      int num1,num2;

      scanf(" %c",&op);
      scanf("%d",&num1);
      scanf("%d",&num2);

      printf("%d",calculate (num1,num2,op));

      getch();
    return 0;
}
int calculate(int x,int y, char op)
{
    int z;
    switch(op)
    {
    case '+':
       z= x+y;
        break;
    case '*':
       z= x*y;
        break;
    case '/':
        z=x/y;
        break;
    case '-':
        z=x-y;
        break;

    }

return z;
}
