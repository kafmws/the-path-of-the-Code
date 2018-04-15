#include <cstdio>
int max=0,n,m;
int map[50][50],box[50][50];
void dfs(int x,int y,int step)
{
	//printf("x=%d,y=%d\n",x,y);
	
		//printf("%d",step);
	//return;
	
	int tx,ty;
	int next[4][2]={
	{0,1},{1,0},{0,-1},{-1,0}
	};
	int i;
	for(i=0;i<4;i++){
		tx=x+next[i][0];
		ty=y+next[i][1];
		if(tx<0||tx>=n||ty<0||ty>=m)
		{
			continue;
		}
		if(map[tx][ty]==0&&box[tx][ty]==0)
		{
			step++;
			box[tx][ty]=1;
			dfs(tx,ty,step+1);
			//box[tx][ty]=0;
		}
	}
}
int main()
{
	scanf("%d %d",&n,&m);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&map[i][j]);
		
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(!(map[i][j])&&box[i][j]==0)
			{
				dfs(i,j,1);
			}
		}
	}
	printf("%d",max);
}
