#include<stdio.h>
#include<string.h>
#define max(a,b) a>b?a:b
int num[5][5],book[5][5]={0},max=0;
int dfs(int x,int y,int sum){
	int next[2][2]={{1,0},{1,1}};
	int tx,ty,i;
	for(i=0;i<2;i++){
		ty=x+next[i][0];
		tx=y+next[i][1];
		if(num[tx][ty]!=0&&book[tx][ty]==0){
			sum+=num[tx][ty];
//			book[tx][ty]==1;
			if(tx!=4){dfs(tx,ty,sum);
			}else{
				max=max(max,sum);
			}
		}
	}
}

int main(){
	int i,j,sum=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&num[i][j]);
		}
	}
	dfs(0,0,num[0][0]);
	printf("%d",max);
	return 0;
}
