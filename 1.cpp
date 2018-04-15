#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
 
int main() {
	int i,j,n,t,cnt;
	while(scanf("%d",&n),n!=0){
		int num[n],re[n];
		j=0,cnt=1;
		for(i=0;i<n;i++){
			scanf("%d",&num[j++]);
			re[j-1]=num[j-1];
		}
		for(i=1;i<n;i++){
			for(j=1;j<=n-i;j++){
				if(num[j]>num[j+1]){
					t=num[j];
					num[j]=num[j+1];
					num[j+1]=num[j];
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=1;j<n;j++){
				if(num[j]==num[i]){
					cnt++;
				}
				else{
					break;
				}
			}
		}
		j=0;
		for(i=0;i<cnt;i++){
			t=num[n-1-j];
			num[n-1-j]=num[j];
			num[j++]=t;
		}j=0;
		for(i=0;i<n;i++){
			printf("%d ",num[i]);
		}
		for(i=0;i<cnt;i++){
			re[n-1-j]=num[n-1-j];
			re[j]=num[j];
			j++;
		}
		for(i=0;i<n;i++){
			printf("%d ",re[i]);
		}
		printf("\n");
	}
	return 0;
}
