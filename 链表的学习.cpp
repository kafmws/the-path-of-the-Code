#include<stdio.h>
#include<stdlib.h>

typedef struct info {
	int num;
	struct info * next;
} node;

typedef struct List {
	node *head;//ָ�������ͷ
	node *tail;//ָ�������β//��������������
} List;//����List����һ���ṹ�壬�Ϳ��Թ�����һ���б�//List ����������

void add(List *list,int n);//��//β��
void head_add(List *list,int num);//ͷ��
void print(List *list);//�����������
void search(List *list,int obj);//��
void kill(List *list,int obj);
void cnt(List *list,int obj);//ͳ��
int main() {
	int num;
	List list;
	node*p=(node *)malloc(sizeof(node)); 
	list.head=NULL,list.tail=NULL;//��ʼ��
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

void add(List *plist,int n) {//β��
	node *p=(node *)malloc(sizeof(node));
	p->num=n;
	p->next=NULL;
	if(plist->head) {//�������Ϊ��
		plist->tail->next=p;
		plist->tail=p;
	} else {
		plist->head=plist->tail=p;
	}
}

void head_add(List *plist,int num){//ͷ�� 
	node *p=(node *)malloc(sizeof(node));
	p->num=num;
	if(plist->head){//����Ϊ��
		p->next=plist->head;
		plist->head=p;
	}else{//����Ϊ��
		plist->head=p;
		p->next=NULL;
	}
}

void print(List *plist) { //�����޸ļ���Ϊ��
	node *p;
	for(p=plist->head; p; p=p->next) {
		printf("%d ",p->num);
	}
}
void search(List *plist,int obj) {
	int flag=0;
	node *p;
	for(p=plist->head; p; p=p->next) {
		if(p->num==obj) { /*��ô��ô��*/
			printf("%d ",p->num);//�����Ҫ���������
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
