#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
#define min(a,b)  a>b?b:a

int main() {
	int n,i=0,j=-1,cnt=1;
	scanf("%d",&n);
	int num[n][n];
	int t=n;
	while(j<n-1) {
		num[i][++j]=cnt++;
	}//j=n-1
//	for(j=0;j<n;j++){printf("%d ",num[0][j]);
//	}
	while(cnt<=t*t) {
		while(i!=n-1) {//ÏÂ 
			num[++i][j]=cnt++;
		}//i=n-1
		while(j!=t-n){//×ó 
			num[i][--j]=cnt++;
		}//j=0
		n--;
		while(i!=t-n){
			num[--i][j]=cnt++;
		}//i=1;
		while(j!=n-1){
			num[i][++j]=cnt++;
		}
	}
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			printf("%3d",num[i][j]);
		}printf("\n");
	}
	return 0;
}

