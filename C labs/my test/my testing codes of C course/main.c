#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#define null -32
//#define size 5

void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}
void gotoxy( int column, int line )
  {
      COORD coord;
      coord.X = column;
      coord.Y = line;
      SetConsoleCursorPosition(
      GetStdHandle( STD_OUTPUT_HANDLE ),
      coord
        );
  }


/*
int a , b;
void swap(int a , int b);

*/

/*
void factorial(int num);
void power(int num , int n );

*/

//void searching(int arr[] ,int size , int n ,int z[],int count);

//void average(int arr[][4] , int avg[] , int n);

//void swap(int* x , int* y);

//void strinLength(char str[] , int size , int* count);


//void reverseNumber(int* number , int* reverseNum);


int main()
{
      /* //      user enter two # and print result
    int x;
    float y;

    printf("Enter The # :\n");

    scanf("%d" , &x);
    scanf("%f" , &y);

    printf("x = %d && y = %f sum = %d " , x , y , x/y);
*/

   /*   for loop
    int i;
    for(i = 0 ; i < 5 ; i++)
    {

        printf("%d welcome\n" , i+1);
    }

    */

/*  //  =============== Menu  ====================
     char ch;
     int flag = 0;
     system("cls || clear");
     printf("New\nDisplay\nExit\nEnter the choose:\n");
     do{
         ch = getch();

             system("cls || clear");
             switch(ch)
             {
             case 'N':
             case 'n':
                printf("new");
                break;

             case 'D':
             case 'd':
                printf("Display");
                break;

             case 'E':
             case 'e':
             case 27:    //Esc button

               // printf("Exit");
                flag = 1;
                break;

             }
             getch();

             //system("cls || clear");
             printf("New\nDisplay\nExit\n Enter the choose:\n");//


        }while(flag == 0);

    */


/*     //  ==================== Magic Box =================

    int i ,size ,row ,col;
    int x = 1;


    printf("Enter the choose:\n");

    scanf("%d" , &size);

    for(i = 0 ; i < (size * size) ; i++)
    {
        if(x == 1)
            {
                row = 1;
                col = (size / 2)+1;
            }
        else
            {
                if( (x-1) % size == 0 )
                   row++;
                   if(row > size)
                        row = 1;


                else
                    {
                        row--;
                        if(row < 1)
                            row = size;

                        col--;
                        if(col < 1)
                            col = size;
                    }

            }


        gotoxy(5*col , row);   // مهعناها مسافه 5 بين الاعمده وبعضا
        printf("%d" , x);
        x++;
    }


   */

   /*  swap "call by value
   system("cls || clear");
   a = 10;
   b = 15;

   swap(a , b);

   */
/*
   int num;
    scanf("%d" , &num);
    factorial(num);
    power(num ,3);
    */

   /* int arr[5] , i , num , count=0;
    int z[5]={0};

    for(i = 0 ; i < 5 ; i++)
        {
            scanf("%d" , &arr[i]);
        }

    searching(arr , 5 ,40 , z , count);

    for(i = 0 ; i < 5 ; i++)
    {

     printf(" %d" , z[i]);
     printf(" %d" , count);

    }

      /* if(num != -1)
         printf("%d\tthis number is found" , num);
       else
        printf("not found");
      */

      /*  enter degree of students in 2D array

     int arr[3][4] , i , j , sum[3] = {0} ;
     int avg[4] = {0};


     for(i = 0 ; i < 3 ; i++)
     {
         for(j = 0 ; j < 4 ; j++)
         {
             scanf("%d" , &arr[i][j]);
         }
         printf("\n");
     }

     for(i = 0 ; i < 3 ; i++)
     {
         for(j = 0 ; j < 4 ; j++)
         {
             printf("%d\t" , arr[i][j]);
             sum[i] += arr[i][j];
         }
         printf("%d\n" , sum[i]);
     }
     average(arr ,avg , 4);

     */

   /*   enter the string first/last name and print the full name
     char fullName[20],
          fName[10],
          lName[10];

    gets(fName);
    gets(lName);

    strcpy(fullName , fName);
    strcat(fullName , " ");
    strcat(fullName , lName);

    printf("fullName = %s" , fullName);

    */

/*    // enter the menu of 3 string in 2D array of Character
    char menu[3][10];
    int i;

    for(i = 0 ; i < 3 ; i++)

        gets(menu[i]);

    for(i = 0 ; i < 3 ; i++)

        printf("%s\n" , menu[i]);


*/
/* swap call by address

    int a = 10 , b = 15;
    swap(&a , &b);
    printf("a = %d && b = %d" , a , b);
    */
/* // the check of prim #
     int num , i , flag = 0;
     scanf("%d" , &num);

     if(num == 1 || num == 2)

        printf("this is prim #");

     else
        for(i = 2 ; i < num ; i++)
             {
                  if (num % i == 0)
                  {
                    flag = 1;
                    printf("this is not prim #");
                    break;
                  }
             }
     if(flag == 0)
        printf("this is prim #");

        */
        /*
        char str[10];
        int len = 0;
        scanf("%s" , str);
        strinLength(str ,10 , &len);
        printf(" length of string = %d" , len);

        */

   /*
        int num , reverseNum = 0;

        printf("Enter an Integer Number :");
        scanf("%d" , &num);

        reverseNumber(&num , &reverseNum);
        printf("%d" , reverseNum);

     */


    getch();
    return 0;
}

/*
void swap(int a , int b)
{
    int temp = a;
        a = b;
        b = temp;

   printf("a = %d  b = %d" , a , b);

}

*/
/*
void factorial(int num)
{
    int i , res = 1;
    for(i = num ; i > 0 ; i-- )
        {
            res *= i;
        }
    printf("factorial = %d\n" , res);

}

void power(int num , int n )
{
    int i , res = 1;


    for(i = 0 ; i < n ; i++ )
        {
            res *= num;
        }
    printf("power = %d" , res);
}
*/

/*
void searching(int arr[] ,int size , int n ,int z[] ,int count)
    {
        int i;
        for(i = 0 ; i < size ; i++)
            {
                if(arr[i] == n)
                {
                    z[i] = 1;
                    count++;

                }
            }


    }
*/

/*
void average(int arr[][4] , int avg[] , int n)
    {
        int i , j , z = 0;
        for(j = 0 ; j < 4 ; j++)
        {
            for(i = 0 ; i < 3 ; i++)
            {
                avg[j] += arr[i][j];

            }
            z = (avg[j]/3);
            printf("%d\t" , z );
        }
    }
*/

/*
void swap(int* x , int* y)
{
    int temp = *x;
        *x = *y;
        *y = temp;
}
*/

/*
void strinLength(char str[] , int size , int* count)
    {
        int i;
        for(i = 0 ; i < size ; i++)
        {
            if(str[i] == '\0')
                break;
            else
              *count += 1;
        }
    }
*/

/*
void reverseNumber(int* number , int* reverseNum)
{
    int reminder;
    while(*number != 0)
    {

        reminder = *number %10;
        *reverseNum = *reverseNum*10 + reminder;
        *number /= 10;
    }
}
*/
