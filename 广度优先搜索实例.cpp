#include <cstdio>
struct node {
	int x;
	int y;
	int step;
};
int main() {
	int n,m,i,j,head=1,tail=1,k,tx,ty,max=0;
	int map[55][55],box[55][55]= {0};
	struct node que[2501];
	scanf("%d %d",&n,&m);
	for(i=1; i<=n; i++) {
		for(j=1; j<=m; j++) {
			scanf("%d",&map[i][j]);
		}
	}
	for(i=1; i<=n; i++) {
		for(j=1; j<=m; j++) {
			if(!(map[i][j])&&box[i][j]==0) {
				box[i][j]=1;
				que[tail].x=i;
				que[tail].y=j;
				que[tail].step=1;
				tail++;
				while(head<tail) {
					int next[4][2]= {
						{0,1},{1,0},{0,-1},{-1,0}
					};
					for(k=0;k<4;k++)
					{
						tx=que[head].x+next[k][0];
						ty=que[head].y+next[k][1];
						if(tx<0||tx>=n||ty<0||ty>=m)
						{
							continue;
						}
						if(map[tx][ty]==0&&box[tx][ty]==0)
						{
						box[tx][ty]=1;
						que[tail].x=tx;
						que[tail].y=ty;
						que[tail].step=que[head].step+1;
						tail++;
						}
			
					}
					head++;
				}
			}
		}
	}
	for(i=0;i<tail-1;i++){
		if(max<que[i].step)
		{
			max=que[i].step;
		}
	} 
	 printf("%d",max);
	 
}
