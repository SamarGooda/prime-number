#include <stdio.h>
#include <stdlib.h>
#define null -32

int main()
{
    /*
                           ================ one-D Arrary Dynamic ==============
    int size;
    int* ptr;
    int i;

    printf("Eter the size of 1-D array Dynamic: ");

    scanf("%d" , &size);

    // stor lacation in memory
    ptr = (int*)malloc(size * sizeof(int)); // we deal with ptr AS the name of array

    // check if the malloc fn store location or no
    if(ptr != -32)
    {
        for(i = 0 ; i < size ; i++)
        {
            scanf("%d" , &ptr[i]); //compiler convert &ptr[i] ==> ptr+i

        }

         for(i = 0 ; i < size ; i++)
         {
             printf("%d\t" , ptr[i]); // the compiler convert ptr[i] ==> *(ptr + i)
         }

         free(ptr);


    }

    */


    int row , col , i , j;

    int** ptr;

    printf("Enter the size of vertical arr: ");
    scanf("%d" , &row);

    printf("Enter the size of horizontal arr: ");
    scanf("%d" , &col);

     ptr = (int**) malloc(row * sizeof(int)); // dynamic one-d array stor data of address == each value of row store address

     for(i = 0 ; i < col ; i++)
     {
         ptr[i] = (int*) malloc(col * sizeof(int)); // dynamic arr horizontal each row in verticat is a pointer of this horizontal

     }

     if( ptr != -32) //-32 == null value
     {
         for(i = 0 ; i < row ; i++)
            for(j = 0 ; j < col ; j++)
                 scanf("%d" , &ptr[i][j]);  // compiler convert  &ptr[i][j]  ==>  *(ptr + i) ?

         for(i = 0 ; i < row ; i++)
         {
            for(j = 0 ; j < col ; j++)
                 printf("\n%d\t" , ptr[i][j]);

            printf("\n");


         }

     for(i = 0 ; i < row ; i++)
        free(ptr[i]);

     free(ptr);


    getch();
    return 0;
}
