#include<stdio.h>
#include<stdlib.h> 
struct info{
	int a;
	int b;
};
void f(struct info * p){
	(++p)->a++;
	p->b++;
}
int main() {
	struct info num[2];
	struct info *p=&num[1];
	num[1].a=10,num[1].b=10;
	f(p);
	printf("%d %d",(++p)->a,p->b);
	return 0;
}
