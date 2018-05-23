#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void Print_Factorial ( const int N );

int main() {
	int N;

	scanf("%d", &N);
	Print_Factorial(N);
	return 0;
}
void Print_Factorial ( const int N ) {
	if (N<0) {
		printf("Invalid input\n");return;
	} else if (N == 0) {
		printf("%d\n", 1);return;
	}
	int num[80000]= {1},i,j;
	int t=0,len=1,tem;//t  进位   len  当前结果的长度
	for(i=2; i<=N; i++) {
		t=0;
		for(j=0; j<len; j++) {
			tem=num[j]*i;
			num[j]=(tem+t)%10;
			t=(tem+t)/10;
			if(t!=0&&j==len-1) {
				len++;
			}
		}
	}
	for(i=len-1; i>=0; i--) {
		printf("%d",num[i]);
	}
}
