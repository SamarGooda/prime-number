#include <stdio.h>
#include <stdlib.h>

int main()
{
    char st[10];
    int i;
    printf("please enter the word");
    scanf("%s",&st);
    for(i=0;i<=10;i++)
    {
        if(i=="\0")
        {
             printf("%d",i-1);
        }
    }
    printf("%s",st);

    return 0;
}
