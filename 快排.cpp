#include<stdio.h>

int qsort(int num[],int start,int end) {
	int i=start,j=end,t;
	int mid=num[(i+j)/2];
	while(i<j) {
		while(num[i]<mid) {
			i++;
		}
		while(num[j]>mid) {
			j--;
		}
		if(i<=j) {
			t=num[i],num[i]=num[j],num[j]=t;
			i++;
			j--;
		}
	}
	if(j>start) {
		qsort(num,0,j);
	}
	if(i<end) {
		qsort(num,i,end);
	}
}
int main() {
	int n,i;
	scanf("%d",&n);
	int num[n];
	for(i=0; i<n; i++) {
		scanf("%d",&num[i]);
	}
	qsort(num,0,n-1);
	for(i=0; i<n; i++) {
		printf("%d ",num[i]);
	}
	return 0;
}
