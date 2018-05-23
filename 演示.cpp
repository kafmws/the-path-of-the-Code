#include<stdio.h>

union{
	char c1;
	char c2;
	char c3;
	char c4;
	struct{
		int a;
		int b;
	};
}test;
int main(){
	test.c4=1;
	test.a=128;
	test.b=10;
	printf("%d",test.c4);
	printf("%d",test.b); 
	return 0;
} 
