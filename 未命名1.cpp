#include<stdio.h>
#define mmin(a,b) a<b?a:b
int search(int *num,int n,int obj,int th) {
	int i,cnt=0;
	for(i=0; i<n; i++) {
		if(num[i]==obj) {
			cnt++;
			if(cnt==th) {
				return i;
			}
		}
	}
}
int main() {
	int n,cnt,i,j,t,book;
	while(scanf("%d",&n)&&n) {
		int num[n],min=0x777777;
		cnt=0;
		for(i=0; i<n; i++) {
			scanf("%d",&num[i]);
			min=mmin(min,num[i]);
		}
		for(i=0; i<n; i++) {
			if(num[i]==min) {
				cnt++;
			}
		}
		j=0;
		if(num[0]!=min) {
			for(i=1; i<=cnt; i++) {
				book=search(num,n,min,i);
				t=num[j++];
				num[j-1]=num[book];
				num[book]=t;
			}
		}
		for(i=0; i<n; i++) {
			printf("%d ",num[i]);
		}
		printf("\n");
	}
	return 0;
}
