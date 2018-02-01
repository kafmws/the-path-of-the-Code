#include<stdio.h>
int main(){
	int a,b,t;
	scanf("%d %d",&a,&b);
	while(b!=0){
		t=b;b=a%b;a=t;
	}
	printf("%d",a);
	return 0;
} 
