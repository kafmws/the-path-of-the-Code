#include<stdio.h>
#include<string.h>

int main(){
	int cnt=0,a,b,c;
	double aver;
	FILE *fp=fopen("stu.dat","r");
	while(fscanf(fp,"%d,%d,%d",&a,&b,&c)!=EOF){
		f=(a+b+c)/3.0;
		if(f>=90){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
} 
