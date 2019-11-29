#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void gotoxy(int column,int line)
{
    COORD coord;
    coord.X=column;
    coord.Y=line;
    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE),
    coord
);
}

int main()
{
    int deg [3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&deg[i][j]);
           gotoxy(i,j);

        }


    }
    printf("%d",deg[i][j]);
    return 0;
}
