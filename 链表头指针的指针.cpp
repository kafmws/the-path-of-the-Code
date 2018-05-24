#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	node *next;
};

void add(node *head,int num) { //对于传入的指针，改变指针本身无效
	node *p=(node *)malloc(sizeof(node));
	p->data=num;
	p->next=NULL;
	p->next=head->next;
	head->next=p;
}

void print(node *head) {
	node *p=head->next;
	for(p; p; p=p->next) {
		printf("%d ",p->data);
	}
	printf("\n");
}


node *search(node *head,int obj) {
	node *p=head->next;
	int flag=0;
	for(p; p; p=p->next) {
		if(p->data==obj) {
			flag=1;
			printf("%d\n",p->data);
			break;
		}
	}
	if(!flag) {
		printf("没有该数字\n");
	}
	if(flag)return p;
	else return NULL;
}

void kill(node *head,int obj) {
	node *p=head;
	node *dead=NULL;
	for(p; p->next; p=p->next) {
		if(p->next->data==obj) {
			dead=p->next;
			p->next=dead->next;
			break;
		}
	}
	free(dead);
}

void change(node *p,int obj){
	if(p){
		p->data=obj;
	}
}

int main() {
	int num,obj;
	node *head=(node *)malloc(sizeof(node));
	head->next=NULL;
	printf("请输入数字，-1表示结束：\n");
	while(scanf("%d",&num)&&num!=-1) {
		add(head,num);
	}
	print(head);
	printf("请输入你想查找的数字:\n");
	scanf("%d",&num);
	search(head,num);
	printf("请输入你想删除的数据:\n");
	scanf("%d",&num);
	kill(head,num);
	print(head);
	printf("请输入修改前和修改后的数据:\n");
	scanf("%d %d",&num,&obj);
	change(search(head,num),obj); 
	print(head);
	return 0;
}
