#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void gotoxy(int, int);
void textattr(int);
void printLineColor(char *, int);

int main(int argc, char *argv[]) {
	char *line;
	char ch, temp;
	int size;
	int curPos = 0;
	int i, flag = 0;

	scanf("%d", &size);

	line = (char *)malloc(size);

	if(line != NULL){
		for(i = 0; i < size; i++)
			line[i] = ' ';

		line[size - 1] = '\0';

		printLineColor(line, size);


		do{
			if(curPos > size - 2){
				curPos = size - 2;
			}
			gotoxy(curPos, 5);

			ch = getch();
			switch(ch){
				case -32:
					ch = getch();
					switch(ch){
						case 72:		//UP
							if(line[curPos] >= 97 && line[curPos] <= 122){
								line[curPos] =line[curPos] - 32;
								//line[curPos] = ch;
								printf("%c", line[curPos]);
							}
							break;
						case 75:		//LEFT ARROW
							curPos--;
							if(curPos < 0)
								curPos = 0;
							gotoxy(curPos, 5);
							break;
						case 77:		//RIGHT ARROW
							curPos++;
							if(curPos > size - 2)
								curPos = size - 2;
							gotoxy(curPos, 5);
							break;
						case 80:		//DOWN
							if(line[curPos] >= 65 && line[curPos] <= 90){
								line[curPos] += 32;
								//line[curPos] = ch;
								printf("%c", line[curPos]);
							}
							break;

					}
					break;
				case 8:
					if(curPos > 0){
						line[size - 1] = ' ';
						for(i = curPos; i < size; i++){
							line[i] = line[i + 1];
							printf("%c", line[i]);
							//curPos--;
						}
						curPos--;
					}
					break;
				case 27:
					flag = 1;
					break;
				default:
					line[curPos] = ch;
					printf("%c", line[curPos]);
					curPos++;
					break;
			}

			//system("cls");

		}while(flag == 0);

	}
	return 0;
}

void textattr(int i){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

void gotoxy(int x, int y){
	COORD c = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void printLineColor(char *line, int size){
	int i;

	for(i = 0; i < size; i++){
		for(i = 0; i < size; i++){
		textattr(0xa0);
		gotoxy(i, 5);
		printf("%c", line[i]);
		//textattr(0x07);
	}
	}

}
