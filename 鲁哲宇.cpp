#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main(){
	char letter;
	scanf("%c",&letter);
	letter=toupper(letter);
	switch(letter){
		case 'S':
		letter=getchar();
		printf("请输入第二个字母:\n");
		letter=getchar();
		if(letter=='a')
			printf("Saturday");
		else if(letter=='u')
			printf("Sunday");
		else printf("输入错误！");
		break;
	case 'F':
		printf("Friday");
		break;
	case 'M':
		printf("Monday");
		break;
	case 'T':
		fflush(stdin);
		printf("请输入第二个字母:\n");
		letter=getchar();
		if(letter=='u')
			printf("Tuesday");
		else if(letter=='h')
			printf("Thursday");
		else printf("输入错误！");
		break;
	case 'W':
		printf("Wednesday");
		break;
	default:
		printf("Data error");
		break;

	}
	getchar();
	getchar();
}
