#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char *str;
	str = (char *)malloc(sizeof(10000));  
	FILE *fpp=fopen("filet.txt","w"); 
	FILE *fp=fopen("file.txt","r");
	while(fscanf(fp,"%[^\n]%*c",str)!=EOF){
		str=strrev(str);
		fprintf(fpp,"%s\n",str);
	}
	remove("file.txt");
	rename("filet.txt","file.txt");
	free(str);
	return 0;
} 
