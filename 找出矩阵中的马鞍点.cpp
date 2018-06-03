#include<stdio.h>
#include<string.h>

int main() {
	int n,i,j,t=-0x77777,tx=0,ty=0,flag=0,p,q;
	scanf("%d",&n);
	if(n==1) {
		scanf("%d",&n);
		printf("NONE");
	} else {
		int num[n][n];
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				scanf("%d",&num[i][j]);
			}
		}
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				t=num[i][j];
				tx=i,ty=j;
				for(p=0; p<n; p++) { //移动列确认行最大值
					if(t<=num[i][p]) {
						t=num[i][p];ty=p;
						//break;
					}
				}
				if(t==num[i][j]&&ty==j) {
					for(q=0; q<n; q++) {
						if(t>=num[q][j]) {
							t=num[q][j];
							tx=q;
						}
					}
				}
				if(t==num[i][j]&&tx==i&&ty==j) {
					printf("%d %d",tx,ty);
					flag=1;
					goto re;
				}
			}
		}
re:
		if(flag==0) {
			printf("NONE");
		}
		return  0;
	}
}
