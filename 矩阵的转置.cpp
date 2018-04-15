#include<stdio.h>

int main(){
	int i,j,m,n;
printf("please input m and n:");
	scanf("%d %d",&m,&n);
	int num[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&num[i][j]);
		}
	} 
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",num[j][i]);
		}
		printf("\n"); 
	} 
	return 0;
}
//int main(){
//	int i,j,n;
//	printf("please input n:");
//	scanf("%d",&n);
//	int num[n][n];
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			num[i][j]=1;
//		}
//	}
//	for(i=2;i<n;i++){//需要改几列 
//		for(j=1;j<i;j++){//每列改几个数据 
//			num[i][j]=num[i-1][j]+num[i-1][j-1]; 
//		} 
//	}
//	for(i=0;i<n;i++){
//		for(j=0;j<i+1;j++){
//			printf("%-3d ",num[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
