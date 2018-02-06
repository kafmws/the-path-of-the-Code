#include<stdio.h>
int gcd(int a,int b){
	int i,t,ret;
	a<b?t=a:t=b;
	for(i=1;i<=t;i++){
		if(a%i==0&&b%i==0){
			ret=i;
		}
	}
	return ret;
} 
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",gcd(a,b));
}
