#include<stdio.h>

typedef struct{
	char str[5][20];
}hh;

int main(){
	hh tem;
	int n=0;
	FILE *fp=fopen(".\\test.txt","r");
		fscanf(fp,"%s %s %s",tem.str[0],tem.str[1],tem.str[2]); 
	puts(tem.str[0]);
	puts(tem.str[1]);
	fclose(fp);
	return 0;
} 
