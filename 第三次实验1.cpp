#include<stdio.h>
#include<string.h>

int main() {
	int i,j;
	int num,classnum;
	char name[15],home[50];
	FILE *fp=fopen("stu.dat","w");
	printf("����������ѧ�š��������༶����ͥסַ��\n");
	for(i=1; i<=20; i++) {
		scanf("%d %s %d %s",&num,name,&classnum,home);
		fprintf(fp,"%d %s %d %s\n",num,name,classnum,home);
	}
	printf("ok");
	fclose(fp);
	return 0;
}
