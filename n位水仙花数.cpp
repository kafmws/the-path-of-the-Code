#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
typedef struct info {
	char str[22];
	int num;
	int mark;
	struct info *pnext;
} note;

note * add() {
	note *a=(note*)malloc(sizeof(note));
	a->pnext=NULL;
	return a;
}

int main() {
	note *p=add(),*t,*head=p;
	int n,i=0,wanted,flag;
	while(n!=3) {
		printf("1£ºadd\n2.search\n3.exit\n");
		printf("please input:");
		scanf("%d",&n);
		switch(n) {
			case 1:
				printf("please input name,num and mark(name num mark):\n");
				t=add();
				p->pnext=t; 
				scanf("%s %d %d",&p->str,&p->num,&p->mark);
				p=t;
				printf("ok\n");
				break;
			case 2:
				flag=0;
				printf("please input the num of the student:\n");
				scanf("%d",&wanted);
				for(p=head; p; p=p->pnext) {
					if(p->num==wanted) {
						flag=1;
						break;
					}
				}
				if(flag) {
					printf("what you want to konw?\n");
					printf("1.name\n2.mark\nplease:");
					scanf("%d",&n);
re:
					if(n==1) {
						printf("%s\n",p->str);
					} else if(n==2) {
						printf("%d\n",p->mark);
					} else {
						printf("sorry,please again:");
						scanf("%d",&n);
						goto re;
					}
				} else {
					printf("there is no one you want");
				}
				break;
			default:
				printf("sorry\nplease again:");
				scanf("%d",&n);
		}
	}

	return 0;
}
