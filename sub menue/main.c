#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
//#define row 3;

void gotoxy(int, int);
void textattr(int);
int main()
{
    int d;
    int f=0;
    int pos=0;
    int i;
    int x,y;
    int j;
    char ch;
    char row=3;
    char mymenue [3][10]={"file","edit","search"};
    char filemenue[3][10]={"new","open","save"};
    char editmenue [3][10]={"undo","redo"};
    char searchmenue [3][10]={"find","replace","go"};
    system("cls");
    do{
            x=10,y=10;
           for(i=0;i<row;i++)
              {
                if(i==pos)
                {

                    SetColor(4);
                }
                gotoxy(x,y);
                printf("%s",mymenue[i]);
                x=x+10;

                SetColor(9);
                }
             if((d%2==0) )
                {
	               x=10+10*pos;
	               y=12;
           switch (pos)
                 {
                     case 0:

                        for(j=0;j<row;j++)
                        {
                         gotoxy(x,y);
                         printf("%s",filemenue[j]);
                         y=+2;
                         printf("\n");
                        }
                     break;

                     case 1:
                        for(j=0;j<row;j++)
                          {
                            gotoxy(x,y);
                            printf("%s",editmenue[j]);
                            printf("\n");
                            y=+2;
                          }
                          break;
                    case 2:
                        for(j=0;j<row;j++)
                         {
                           gotoxy(x,y);
                           printf("%s",searchmenue[j]);
                           printf("\n");
                            y=+2;
                         }
                         break;




    }
    }
    ch=getch();
    switch (ch)
    {
        case 'e':
             f=f+1;
            system("cls");
            printf("exit");
            break;
        case 0:
            getch();
            switch (ch)
            {
                case 77:
                    pos++;
                    if(pos==3)
                        pos=0;
                case 75:
                    pos--;
                    if(pos<0)
                        pos=2;

            }

    }

    }while(f==0);
    getch();
    return 0;
}
void textattr(int i){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

void gotoxy(int x, int y){
	COORD c = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}
