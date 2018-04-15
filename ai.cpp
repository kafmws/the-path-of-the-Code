#include<stdio.h>
#include<stdlib.h>

typedef struct info {
	int num;
	struct info * next;
} node;

typedef struct List {
	node *head;
	node *tail;
} List;

void add(List *list,int n);//增
void print(List *list);//遍历链表输出
void search(List *list,int num);//查 
int main() {
	int num;
	List list;
	list.head=NULL,list.tail=NULL;//初始化
	while(scanf("%d",&num),num!=-1) {
		add(&list,num);
	}
//	print(&list);
	scanf("%d",&num);
	search(&list,num);
	return 0;
}

void add(List *plist,int n) { 
	node *p=(node *)malloc(sizeof(node));
	p->num=n;
	p->next=NULL;
	if(plist->head) {//如果链表不为空
		plist->tail=p;

	} else {
		plist->head=plist->tail=p;
	}
}

void print(List *plist){//稍作修改即可为查 
	node *p=NULL;
	for(p=plist->head;p;p=p->next){
		printf("%d ",p->num);
	}
} 

void search(List *plist,int obj){
	node *p=NULL;
	for(p=plist->head;p;p=p->next){
		if(p->num==obj)/*怎么怎么样*/{
			printf("%d ",p->num);//输出需要输出的数据 
		} 
	}
}
