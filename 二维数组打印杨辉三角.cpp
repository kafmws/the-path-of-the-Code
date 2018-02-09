#include<stdio.h>
int main() {
	int seq[20][20],i,j,n;
	for(i=0; i<20; i++) {
		for(j=0; j<20; j++) {
			seq[i][j]=1;
		}
	}
	scanf("%d",&n);
	for(i=2; i<n; i++) {
		for(j=1; j<i; j++) {
			seq[i][j]=seq[i-1][j]+seq[i-1][j-1];
		}
	}
	for(i=0; i<n; i++) {
		for(j=0; j<=i; j++) {
			printf("%-3d ",seq[i][j]);
		}
		printf("\n");
	}
	return 0;
}

