#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main(){
	char letter;
	scanf("%c",&letter);
	letter=toupper(letter);
	switch(letter){
		case'T':printf("请输入第二个字母:\n");
			if((letter=getch())=='u')
				printf("Tuesday");
			else if((letter=getch())=='h')
				printf("Thursday");
			else
				printf("error");
				break;
		default:
			printf("error"); 
	}
	getchar();
	getchar();
}
