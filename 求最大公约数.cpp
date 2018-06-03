#include<stdio.h>
//int main(){
//	int a,b,i,max;
//	scanf("%d %d",&a,&b);
//	if(a<b){
//		int t;
//		t=a;a=b;b=t;
//	}
//	for(i=1;i<=b;i++){
//		if(a%i==0&&b%i==0){
//			max=i;
//		}
//	}
//	printf("%d",max);
//	return 0;
//} 

////Õ·×ªÏà³ý·¨ 

int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}


int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",gcd(a,b));
	return 0;
}
