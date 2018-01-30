#include<stdio.h>
#include<math.h>
int main(){
	int i,j,x,y,v,n=0;
	printf("请输入区间[x,y]:\n");
	scanf("[%d,%d]",&x,&y);
	for(i=x;i<=y;i++){
		int flag=1;
		v=pow(i,0.5);
		for(j=2;j<=v;j++){
			if(i%j==0){
				flag=0;
			}
		}
		if(flag==1){
			n++;
			printf("%d ",i);
		}
	}
	printf("\n[%d,%d]内共有%d个素数。",x,y,n);
}
