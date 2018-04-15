#include<stdio.h>
#include<math.h>
struct info{
	int num;
	int x;
};
struct info f(struct info *n){
	(*n).num+=10;
	(*n).x+=10;
}
int main() {
	struct info n,m; 
	m.num=10,m.x=10;
	struct info *p=&m;
	f(p);
	printf("%d %d",p->num,p->x);
	return 0;
}
