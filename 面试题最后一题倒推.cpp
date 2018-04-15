#include<stdio.h>

int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
	int num[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&num[i][j]);
		}
	}
	for(i=n-2;i>=0;i--){
		for(j=0;j<=i;j++){
			num[i][j]+=num[i+1][j]>num[i+1][j+1]?num[i+1][j]:num[i+1][j+1];
		}
		for(k=0;k<n;k++){
			printf("%d ",num[i][k]);
		}printf("\n");
	}
	printf("%d",num[0][0]);
    return 0;
}
