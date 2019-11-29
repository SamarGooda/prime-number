//program to account the prime number

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int count=0;
    printf("enter the number");
    scanf("%d",&num);
    if(num==0||num==1)
        printf("this isnot a prime number");
    else if(num==2||num==3)
         printf("this is a prime number");
    else
       {
           for(i=2;i<num;i++)
        {
            if(num%i==0)
                count=count+1;
        }
           if (count>0)

              printf("this isnot prime");

          else
              printf("this is a prime");
       }
    return 0;
}
