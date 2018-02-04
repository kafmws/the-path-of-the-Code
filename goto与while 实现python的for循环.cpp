#include<stdio.h>
int main(){
	int num,i=1,flag=1;
	scanf("%d",&num);
	one:while(i<=num&&num<i*10){
		flag=0;
		for(;i>0;i/=10){
			printf("%d ",num/i);
			num%=i;
		}
		break;
	}
	if(flag){
			i*=10;
			goto one;
		}
		return 0;
} 
