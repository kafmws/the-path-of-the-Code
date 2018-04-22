#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
#define min(a,b)  a>b?b:a

int main(){
	char *str="happy",sttr[10];
	strncpy(sttr,str,10);
	printf("%s %d",sttr,strlen(sttr));
	return 0;
}

