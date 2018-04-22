#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	char key;
	int x = 1, y = 1;
	system("color 3a");
	int box[30][30] = {0};
	int i, j;
	for (i = 0; i < 30; i++) {
		for (j = 0; j < 30; j++) {
			if(i == 0 || j == 0 || i == 29 || j == 29) {
				box[i][j] = 1;
			}

		}

	}
	for (i = 0; i < 30; i++) {
		for (j = 0; j < 30; j++) {
			if(j == 3 ||(i == 8 && j >= 3 && j <= 25)||(j == 25 && i >= 8 && i <= 22) || (i == 22 &&j >= 10 && j <= 25)) {
				box[i][j] = 1;
			}
			if((i == 10 && j >= 3 && j <= 23 )||(j == 23 && i >= 10 && i <= 20) || (i == 20 && j >= 10 && j <=23)) {
				box[i][j] = 1;
			}
		}

	}
	box[19][10] = 1;
	box[19][9] = 1;
	box[19][8] = 1;
	box[19][7] = 1;
	for ( i = 1; i<5; i++) {
		box[19 + i][7] = 1;
	}
	box[23][10] = 1;
	box[23][9] = 1;
	box[23][8] = 1;
	box[9][3] = 0;
	box[28][3] = 0;
	box[2][1] = 1;
	box[1][1] = 9;
	box[21][8] = 2;
	while(1) {
		system("cls");
		for (i = 0; i < 30; i++) {
			for (j = 0; j < 30; j++) {
				if(box[i][j] == 1) {
					printf("■");
				} else if(box[i][j] == 0) {
					printf ("  ");
				} else if(box[i][j] == 9) {
					printf("♀");
				} else if(box[i][j] == 2) {
					printf("★");
				}
			}
			printf("\n");
		}
		printf("请按'W' 'A' 'S' 'D'移动人物\n");
		key = getch();
		switch(key) {
			case 'W':
			case 'w':
				if(box[x-1][y] != 1) {
					box[x][y] = 0;
					x--;
					box[x][y] = 9;
				}

				break;
			case 'A':
			case 'a':
				if(box[x][y-1] != 1) {
					box[x][y] = 0;
					y--;
					box[x][y] = 9;
				}
				break;
			case 'S':
			case 's':
				if(box[x+1][y] != 1) {
					box[x][y] = 0;
					x++;
					box[x][y] = 9;
				}
				break;
			case 'D':
			case 'd':
				if(box[x][y+1] != 1) {
					box[x][y] = 0;
					y++;
					box[x][y] = 9;
				}
				break;
		}
		if(x == 21 && y == 8) {
			system("cls");
			printf("您 胜 利 了\n");
			printf("请按任意键返回....");
			getchar();
			getchar();
			break;
		}
	}

}

