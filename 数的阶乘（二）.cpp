#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int num,i,j,tem,t=0;//t  ��λ 
	scanf("%d",&num);
	int obj[20000]={1},len=1;//len ��ǰ���ĳ��� 
	for(i=1;i<=num;i++){ 
		t=0;
		for(j=0;j<len;j++){//������˵�ǰ���� 
			tem=obj[j]*i+t;
			t=tem/10;
			obj[j]=tem%10;
		}
		while(j==len&&t!=0){//���н�λ 
			obj[len++]=t%10;
			t/=10;
		}
	}
	for(i=len-1;i>=0;i--){
		printf("%d",obj[i]);
	}
	return 0; 
}
