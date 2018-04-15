#include<stdio.h>
int main() {
	int i,n,g,cnt=0,sum=0;
	scanf("%d",&n);
	if(n!=0) {

		for(i=0; i<n; i++) {
			scanf("%d",&g);
			sum+=g;
			if(g>=60) {
				cnt++;
			}
		}
		printf("average = %.1f\n",sum*1.0/n);
		printf("count = %d",cnt);
	} else {
		printf("average = %.1f\n",0);
		printf("count = %d",0);
	}
	return 0;
}
