#include<stdio.h>
int i=0;
void sort(int n,char start,char mid,char end) {
	if(n==1) {
		i++,printf("from %c to %c\n",start,end);
		return ;
	}
	sort(n-1,start,end,mid);
	i++,printf("from %c to %c\n",start,end);
	sort(n-1,mid,start,end);
}
int main() {
	int n;
	scanf("%d",&n);
	sort(n,'A','B','C');
	printf("%d times.",i);
	return 0;
}
