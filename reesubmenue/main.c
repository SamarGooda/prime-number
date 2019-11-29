#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include <stdlib.h>
#include <ctype.h>
#define row 3
#define view 0
void textattr(int);
void gotoxy(int, int);
int main()
{
  int i=0,pos=0,d=1,j=0,x,y;
  int f=1;
  char ch;
  char myMenu[row][10]={"File ","Edit ","Search "};
  char fileMenu[row][10]={"New ","Open ","Save "};
  char editMenu[row][10]={"Undo ","Redo "};
  char searchMenu[row][10]={"Find ","Replace ","Go "};
  system("cls");
  do
  {
   y=10;
   x=10;
    system("cls");
   _flushall();
   for(i=0;i<row;i++)
   {
	 if(i==pos)
	 {textattr(0x70);}

	 if(view==1)
	 {
	   gotoxy(x,y);
	   cprintf(" %s",myMenu[i]);
	   y=y+2;
	 }
	 else
	 {
	   gotoxy(x,y);
	   //cprintf
	   printf(" %s",myMenu[i]);
	   x=x+10;
	 }
	 textattr(0x07);
	 }
	 if((d%2==0) && (view==0) )
	 {
	  x=10+10*pos;
	  y=12;
	  switch(pos)
		{
		  case 0:
		   for(j=0;j<3;j++)
		   {
			 gotoxy(x,y);
			 printf(fileMenu[j]);
			 y=y+2;
			 printf("\n");
		   }
		   break;
		  case 1:
		   for(j=0;j<2;j++)
		   {
			 gotoxy(x,y);
			 printf(editMenu[j]);
			 printf("\n");
			 y=y+2;
		   }
		   break;
		  case 2:
		   for(j=0;j<3;j++)
		   {
			 gotoxy(x,y);
			 printf(searchMenu[j]);
			 printf("\n");
			 y=y+2;
		   }
		   break;
		}

   }
    //

   printf("\n");
   ch=getch();
   gotoxy(3,3);
   switch(ch){
   case 'e':
	  printf("Exit");
	  getch();
	  f=0;
	  break;
   case 0:
	  ch=getch();
	  switch (ch)
	  {
		case 77:
		  pos++;
		  if(pos==row)
			 pos=0;
		  d=1;
		  break;
		case 75:
		  pos--;
		  if(pos<0)
			 pos=row-1;
		  d=1;
		  break;
		case 72:
		case 80:
		  d++;
		  break;

	  }
	 }
   }while(f);

   return 0;
}
void textattr(int i){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
void gotoxy(int x, int y){
	COORD c = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
/*void printLineColor(char *line, int size){
	int i;

	for(i = 0; i < size; i++){
		for(i = 0; i < size; i++){
		textattr(0xa0);
		gotoxy(i, 5);
		printf("%c", line[i]);
		//textattr(0x07);
}}	}
*/
