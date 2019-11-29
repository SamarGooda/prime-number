#include <stdio.h>
#include <stdlib.h>
void magic (int size);
int main()

{
   int size;
   scanf("%d",&size);
   magic(size);


    return 0;
}
void magic (int size)
  {

    int i,j,x=1,row,col;
    int arr[size][size];
    for(i=0;i<size;i++)
     {
         for(j=0;j<size;j++)
         {
             if(x==1)
             {
                 row=0;
                 col=size/2;
             }
             else if((x-1)%size==0)
             {
                 row++;
                 if(row==size)
                 {
                     row=0;
                 }
             }
             else
             {
                 row--;
                 if(row<0)
                    row=size-1;
                 col--;
                 if(col<0)
                    col=size-1;
             }
             arr[row][col]=x;
             x++;

         }
     }



  for(row=0;row<size;row++)
  {
      for(col=0;col<size;col++)
        {
           printf("%d ",arr[row][col]);
        }
       printf("\n");
  }
  }

