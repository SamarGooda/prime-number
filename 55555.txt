#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size ,row,col,i;
    scanf("%d",&size);
    row =1;
    col=(size/2)+1;
    goto (col,row);
    printf("%d",i);
    for(i=2;i<=(size*size);i++)
    {
        if((i-1)%size)==0)
          {
              row=1;
           col=(size/2)+1;
          }
        else
          {
               row--;
               col--;
          }
    goto (col,row);
    printf("%d",i);

    }

    return 0;
}
