#include <stdio.h>
#include <stdlib.h>
int factor (int size);

int main()
{
    int num;


    scanf("%d",&num);
    factor(num);
    getch();

    return 0;

}
int factor(int size)
{
    int i;
    int fact=1;
     for(i=1;i<=size;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;



}
