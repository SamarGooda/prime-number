#include <stdio.h>
#include <stdlib.h>


void reverseNumber(int* number , int* reverseNum);
int main()
    {
            int num , reverseNum = 0;

            printf("Enter an Integer Number :");
            scanf("%d" , &num);

            reverseNumber(&num , &reverseNum);
            printf("%d" , reverseNum);




        getch();
        return 0;
    }

void reverseNumber(int* number , int* reverseNum)
    {
        int reminder;
        while(*number != 0)
        {

            reminder = *number %10;
            *reverseNum = *reverseNum*10 + reminder;
            *number /= 10;
        }
    }
