#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int f=0;

    do{
        printf("New \n Display \n Exit");
        scanf(" %C",&c);
        switch(c)
        {
        case 'n':
        case 'N':
            printf("\nnew\n");
            break;
        case 'd':
        case 'D':
            printf("\ndisplay\n");
            break;
        case 'e':
        case 'E':
            printf("Exit");
            f=1;
            break;
        }}
        while(f==0);

    return 0;
}
