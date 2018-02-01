#include<stdio.h>
int main(){
	int a,b,i,max;
	scanf("%d %d",&a,&b);
	if(a<b){
		int t;
		t=a;a=b;b=t;
	}
	for(i=1;i<=b;i++){
		if(a%i==0&&b%i==0){
			max=i;
		}
	}
	printf("%d",max);
	return 0;
} 
