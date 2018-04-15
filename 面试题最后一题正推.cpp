#include<stdio.h>

int main() {
	int n,i,j,k=0;
	scanf("%d",&n);
	int num[n][n];
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&num[i][j]);
		}
	}
	for(i=1; i<n; i++) {
		for(j=0; j<i+1; j++) {
			if(j==0) {
				num[i][j]+=num[i-1][j];
			} else {
				num[i][j]+=num[i-1][j]>num[i-1][j-1]?num[i-1][j]:num[i-1][j-1];
			}
		}
		for(k=0; k<n; k++) {
			printf("%d ",num[i][k]);
		}
		printf("\n");
	}int max=num[n-1][n-1];
	for(i=0;i<n;i++){
		max=num[n-1][i]>max?num[n-1][i]:max;
	}
	printf("%d",max);
	return 0;
}
