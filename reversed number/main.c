#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,reminder,reversed=0;
   printf("please enter the number");
   scanf("%d",&num);
   while(num!=0)
   {
       reminder =num%10;
       reversed=reversed*10+reminder;
       num=num/10;
   }
   printf("the reversed of this number=%d",reversed);

    return 0;
}

