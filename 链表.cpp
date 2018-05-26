#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <string.h>
typedef struct info {
	int num;
	struct info * next;
} node;

typedef struct List {
	node *head;//指向链表的头
	node *tail;//指向链表的尾//由其来操纵链表
} List;

void print(List *list){
	node *p=list->head->next;
	for(p;p;p=p->next){
		printf("%d ",p->num);
	}
	printf("\n") ;
}

int cmp(const void*a,const void*b){
	return ((node *)a)->num-((node *)b)->num;
}
int main(){
	int num,cnt=0;
	List list;
	node *p=(node *)malloc(sizeof(node));
	list.head=list.tail=p;
	while(scanf("%d",&num)&&num!=-1){
		node *pt=(node *)malloc(sizeof(node));
		pt->next=NULL;
		pt->num=num;
		list.tail->next=pt;
		list.tail=pt;
		cnt++;
	}
	qsort((list.head)->next,cnt,sizeof(node),cmp);
	print(&list);
	return 0;
}
