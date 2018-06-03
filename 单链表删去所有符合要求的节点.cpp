#include<stdio.h>
#include<stdlib.h>

typedef enum{
	man,
	woman
}sex_status;

typedef struct Node{
	int num;
	char name[15];
	sex_status sex;
	int age;
	struct Node *next;
}node;

void add(node *head){
	node *p=(node *)malloc(sizeof(node));
	scanf("%d%s%d%d",&p->num,p->name,&p->sex,&p->age);
	p->next=head->next;
	head->next=p; 
} 

void print(node *head){
	node *p=head->next;
	for(p;p;p=p->next){
		if(p->sex==0)
		printf("%d %s %s %d\n",p->num,p->name,"man",p->age);
		else
		printf("%d %s %s %d\n",p->num,p->name,"woman",p->age);
	} 
}

void kill_age(node *head,int age){
	node *p=head->next,*pre=head;
	int flag=0;
	for(p;p;p=p->next){
		if(p->age==age){
			pre->next=p->next;
			free(p);
			flag=1;
		}
	}
	if(flag==0){
		printf("û����ô���ѧ��\n");
	}
}

int main(){
	node *head=(node *)malloc(sizeof(node));
	head->next=NULL;
	int i=0;
	printf("������ѧ�ţ����֣��Ա����䣺\n");
	while(i++!=4){
		add(head);
	}
	printf("���ڵ�ѧ����ϢΪ��\n");
	print(head);
	printf("����������ɾ����ĳ������:\n");
	int age;
	scanf("%d",&age);
	kill_age(head,age);
	printf("���ڵ�ѧ����ϢΪ��\n");
	print(head);
	return 0;
} 
