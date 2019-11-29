#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 4



int main()
{
    int i,j;
    int deg [row][col];
    int sum[3]={0};
    int avg[4]={0};
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)

           scanf("%d",&deg[i][j]);
}
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d \t",deg[i][j]);

        }

      printf("\n");
    }
printf("the summation of degree\n");
for (i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        sum[i]=sum[i]+deg[i][j];
    }
}
for(i=0;i<row;i++)
{

  printf("%d\n",sum[i]);
}
printf("the avarage of degree\n");
for (i=0;i<col;i++)
{
    for(j=0;j<row;j++)
    {
        avg[i]=avg[i]+deg[j][i];
    }
    avg[i]/=3;
}

for(i=0;i<col;i++)
{

  printf("%d\n",avg[i]);
}
    getchar();
    return 0;
}
