#include<stdio.h>
#include<stdlib.h>

typedef struct info {
	int num;
	struct info * next;
} node;

typedef struct List {
	node *head;//指向链表的头
	node *tail;//指向链表的尾//由其来操纵链表
} List;//我们List出另一个结构体，就可以构建另一个列表//List 是链表类型

void add(List *list,int n);//增//尾插
void head_add(List *list,int num);//头插
void print(List *list);//遍历链表输出
void search(List *list,int obj);//查
void kill(List *list,int obj);
void cnt(List *list,int obj);//统计
int main() {
	int num;
	List list;
	node*p=(node *)malloc(sizeof(node)); 
	list.head=NULL,list.tail=NULL;//初始化
	while(scanf("%d",&num),num!=-1) {
		head_add(&list,num);
	}
	printf("All data:\n");
	print(&list);
	printf("\nwhich you wang to search for?\n");
	scanf("%d",&num);
	search(&list,num);
	printf("which you want to kill?\n");
	scanf("%d",&num);
	kill(&list,num);
	print(&list);
	return 0;
}

void add(List *plist,int n) {//尾插
	node *p=(node *)malloc(sizeof(node));
	p->num=n;
	p->next=NULL;
	if(plist->head) {//如果链表不为空
		plist->tail->next=p;
		plist->tail=p;
	} else {
		plist->head=plist->tail=p;
	}
}

void head_add(List *plist,int num){//头插 
	node *p=(node *)malloc(sizeof(node));
	p->num=num;
	if(plist->head){//链表不为空
		p->next=plist->head;
		plist->head=p;
	}else{//链表为空
		plist->head=p;
		p->next=NULL;
	}
}

void print(List *plist) { //稍作修改即可为查
	node *p;
	for(p=plist->head; p; p=p->next) {
		printf("%d ",p->num);
	}
}
void search(List *plist,int obj) {
	int flag=0;
	node *p;
	for(p=plist->head; p; p=p->next) {
		if(p->num==obj) { /*怎么怎么样*/
			printf("%d ",p->num);//输出需要输出的数据
			flag=1;
		}
	}
	if(!flag) {
		printf("sorry,there is no one you want.");
	}
}
void kill(List *plist,int obj) {
	node *p=plist->head,*dead=NULL;
	if(p->num==obj) {
		plist->head=p->next;
		free(p);
	} else {
		for(p; p->next; p=p->next) {
			if(p->next->num==obj) {
				dead=p->next;
				p->next=dead->next;
				free(dead);
				break;
			}
		}
	}
}

//void sort(List *list,int cnt){
//	node *p=(node *)malloc(sizeof(node));
//	for(int i=1;i<cnt;i++){
//		for(p=list->head;p->next;p=p->next){
//			if(p->next)
//		}
//	}
//}
