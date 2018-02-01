#include<stdio.h>
int main() {
	int n,i,sign=-1;
	double sum=1.0;
	scanf("%d",&n);
	for(i=2; i<=n; i++) {
//		if(i%2==1){
//			sum=sum+1.0/i;
//		}
//		else{
//			sum=sum-1.0/i;
//		}
		sum=sum+sign*1.0/i;
        sign=-sign;
	}
	printf("%f",sum);
	return 0;
}
