#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int* ptr[3];
    ptr[0]=(int*)malloc (3*sizeof(int));
    ptr[1]=(int*)malloc (3*sizeof(int));
    ptr[2]=(int*)malloc (3*sizeof(int));
    if (ptr!=NULL)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                scanf("%d",&ptr[i][j]);
        }

        for(i=0;i<3;i++)
          {
              for(j=0;j<3;j++)
            {
                 printf("%d\t",ptr[i][j]);
            }
              printf("\n");
          }
    }

    else
        printf("error");

    getch();
    return 0;
}
