#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degree;
    scanf("%d",&degree);
    if (degree >= 90)
        printf("A");
    else if (degree>=80)
         printf("B");
    else if (degree>=70)
         printf("c");
    else if (degree>=60)
         printf("d");
    else
        printf("F");
    return 0;
}
