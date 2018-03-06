#include<stdio.h>
int main(){
	int i,j,n,k,t;
	scnaf("%d",&n);
	int matrix[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	matrix[i][j]/=matrix[i][j];
		for(j=0;i<n;i++){
			for(i=j+1;i<n;i++){
				t=matrix[i][j];
				for(k=0;k<n;k++){
					matrix[i][k]-=matrix[i][j]*t;
				}
			}
		}
	}
	return 0;
}
