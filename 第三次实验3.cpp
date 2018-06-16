#include<stdio.h>
#include<string.h>

int main() {
	int a,b,c,sum;
	FILE *fp=fopen("stu.dat","r");
	FILE *fpp=fopen("stu_sort","w");
	while(fscanf(fp,"%d,%d,%d",&a,&b,&c)!=EOF) {
		sum=a+b+c;
		fprintf(fpp,"%d,%d,%d,%d",a,b,c,sum);
	}
	fclose(fp);
	fclose(fpp);
	return 0;
}
