#include<stdio.h>
#include<stdlib.h>
int main() {
	int i,j,n,round,num=1;
	scanf("%d",&n);
	int matrix[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matrix[i][j]=0;
		}
	}
	if(n==1) {
		matrix[0][0]=1;
	} else {
		for(round=0; round<n/2; round++) {
			for(j=0; j<n; j++) {
				matrix[0][j]=num++;
			}
			for(i=0; i<n; i++) {
				matrix[i][j]=num++;
			}
			for(;j>-1; j--) {
				matrix[i][j]=num++;
			}
			for(;i>-1; i--) {
				matrix[i][j]=num++;
			}
			n--;
		}
	}
	for(i=0; i<n+round; i++) {
		for(j=0; j<n+round; j++) {
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
