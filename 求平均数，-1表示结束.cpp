#include<stdio.h>
int main(){
	int num,n=0,sum;
	double average=0;
	do{
		scanf("%d",&num);
		sum+=num;
		n++;
	}while(num!=-1);/*-1 ±íÊ¾½áÊø*/
	average=sum/2.0;
	printf("%f   %d",average,n);
} 
