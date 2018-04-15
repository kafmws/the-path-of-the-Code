#include<stdio.h>
#define max(a,b) a>b?a:b
int opt(int num[],int n)
{
	if(n==0)
	{
		return num[0];
	}
	if(n==1)
	{
		return max(num[0],num[1]);
	}
	else{
		int A=opt(num,n-2)+num[n];
		int B=opt(num,n-1);
		printf("A=%d\tB=%d\n",A,B); 
		return max(A,B);
	}

  } 

int main(){
	int n,i;
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("%d",opt(num,n-1)); 
	return 0; 
}
