#include <stdio.h>
#include <stdlib.h>

int pow (int num,int power);

int main()
{
    int num,power;


    scanf("%d",&num);
    scanf("%d",&power);
    pow(num,power);
    getch();

    return 0;

}
int pow (int num,int power)
{
    int i;
    int number =1;
     for(i=1;i<=power;i++)
    {
        number=number*num;
    }
    printf("%d",number);
    return 0;



}

