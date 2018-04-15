#include<stdio.h>
#include<stdlib.h>
int main() {
	int i,j,n,num=1,flag=1;
	scanf("%d",&n);
	int matrix[n][n]= {0};
	i=0,j=0;
	while(num<=n*n) {
		while(i<n&&matrix[i+1][j]==0) { //down
			matrix[++i][j]=num++;
		}
		if(flag){
			flag=0;
			i--;
		}
		while(j+1<n&&matrix[i][j+1]==0) { //right
			matrix[i][++j]=num++;
		}
		while(i>=0&&matrix[i-1][j]==0) { //up
			matrix[--i][j]=num++;
		}
		i++;
		while(j>=0&&matrix[i][j-1]==0) { //left
			matrix[i][--j]=num++;
		}
		j++;
	}
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%-3d ",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
