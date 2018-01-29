#include<stdio.h>
int main(){
	int num;
	printf("ÇëÊäÈëÊı×Ö:\n");
	scanf("%d",&num);
	while(num!=0){
		if(num%10!=0)
		 printf("%d",num%10);
		num/=10;
	}
	return 0;
}
