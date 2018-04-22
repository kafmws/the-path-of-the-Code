#include<stdio.h>
#include<math.h>
#include<string.h>
int T(int n){
	return (1+n)*n/2;
}

long long w(int n){
	long long re=0,i;
	for(i=1;i<=n;i++){
		re+=i*T(i+1);
	}
	return re;
}
int main() {
	long long i,t,n,cnt=1;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%lld %lld %lld\n",cnt++,n,w(n)); 
	}
	return 0;
}
