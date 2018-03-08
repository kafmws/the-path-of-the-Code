#include <stdio.h>

void f(int **p)
{
	
	++(*p);
}
int main()
{
	int a[10]={55,2,3,4,5,6,7,8,9,10};
	int i,*p;
	for(p=a;p<a+10;f(&p))
	{
		printf("%d ",*p);
	}
	return 0;
}
