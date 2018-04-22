#include<stdio.h>
#include<math.h>
int main(){
	char *str="happy";
	FILE *fp=fopen(".\\haha.txt","w+");
	fprintf(fp,"happy");
	fprintf(fp,"%s",str);
	fclose(fp);
	return 0;
} 
