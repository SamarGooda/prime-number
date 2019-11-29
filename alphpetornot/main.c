#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
     printf("please enter your character\n");
    scanf("%c",&c);
    if((c>='a'&& c<='z')||(c>='A'&&c<='Z'))
        printf("this is alphabet");
    else
        printf("this is not alphabet");
    return 0;
}
