#include<stdio.h>
#define max(a,b) a>b?a:b;

int num[5][5],max=0;
int dfs(int x,int y,int sum) {
	int tx,ty,i;
	int num[2][2]= {{1,0},{1,1}};
	for(i=0; i<2; i++) {
		tx=x+num[i][0];
		ty=y+num[i][1];
		if(num[tx][ty]==0) {
			continue;
		}
		if(tx==4) {
			sum+=num[tx][ty];
			break;
		}sum+=num[tx][ty];
		dfs(tx,ty,sum);
	}max=max(max,sum);
}

int main() {
	int i,j,n,sum=0;
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			scanf("%d",&n);
		}
	}
	dfs(0,0,num[0][0]);
	printf("%d",max);
	return 0;
}
