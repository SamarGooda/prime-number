#include <stdio.h>
#include <stdlib.h>
int search (int arr[],int s,int n);
int main()
{
    int arr [5];
    int i,j;
    int num;
    for(i=0;i<5;i++)
    {
      scanf("%d",&arr[i]);

    }
    printf("\n");
    for(i=0;i<5;i++)
    {
          printf(" %d",arr[i]);
    }

    num = search(arr,5,50);
    printf("\n");
    printf(" %d",num);


    if (num != -1)
        printf("found at location%d",num);
    else
        printf("not found ");

    getch();
    return 0;
}
int search (int arr[],int s,int n)
{
    int i,count=0;
    for(i=0 ; i < s ;i++)
    {

        if(n==arr[i])
            {count++;
            }



    }
     return count;
}
