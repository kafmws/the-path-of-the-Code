#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	node *next;
};

void add(node *head,int num) { //���ڴ����ָ�룬�ı�ָ�뱾����Ч
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
		printf("û�и�����\n");
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
	printf("���������֣�-1��ʾ������\n");
	while(scanf("%d",&num)&&num!=-1) {
		add(head,num);
	}
	print(head);
	printf("������������ҵ�����:\n");
	scanf("%d",&num);
	search(head,num);
	printf("����������ɾ��������:\n");
	scanf("%d",&num);
	kill(head,num);
	print(head);
	printf("�������޸�ǰ���޸ĺ������:\n");
	scanf("%d %d",&num,&obj);
	change(search(head,num),obj); 
	print(head);
	return 0;
}
