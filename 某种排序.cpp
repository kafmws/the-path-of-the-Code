#include <stdio.h>

int main() {
	int n,i,j,t;
	scanf("%d",&n);
	int num[n];
	for(i=0; i<n; i++) {
		scanf("%d",&num[i]);
	}
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if(num[i]>num[j]) {
				t=num[i];
				num[i]=num[j];
				num[j]=t;
				i=j;
			}
		}
		//printf("%d ",num[n-i-1]);
	}
	for(i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	return 0;
}
