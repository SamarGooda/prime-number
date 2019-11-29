#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    char op;
    scanf("%d",&x);
    scanf(" %c",&op);
    scanf("%d",&y);

    switch(op)
    {
    case'+':
        z=x+y;
        break;
    case'-':
        z=x-y;
        break;
    case'*':
        z=x*y;
        break;
    case'/':
        if(y==0)
            printf("error");
        else
            z=x/y;
        break;
    default:
        printf("error");


    }
    printf("%d",z);
    return 0;
}
