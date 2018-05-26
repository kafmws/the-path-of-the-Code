#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int num,i,j,tem,t=0;//t  进位 
	scanf("%d",&num);
	int obj[20000]={1},len=1;//len 当前数的长度 
	for(i=1;i<=num;i++){ 
		t=0;
		for(j=0;j<len;j++){//遍历相乘当前数组 
			tem=obj[j]*i+t;
			t=tem/10;
			obj[j]=tem%10;
		}
		while(j==len&&t!=0){//仍有进位 
			obj[len++]=t%10;
			t/=10;
		}
	}
	for(i=len-1;i>=0;i--){
		printf("%d",obj[i]);
	}
	return 0; 
}
