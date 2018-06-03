#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}node;

void add(node *head,int data){
	node *p=(node *)malloc(sizeof(node));
	p->data=data;
	p->next=head->next;
	head->next=p;
} 

void re(node *head){
	node *p=head->next;
	node *q=p->next;
	p->next=NULL;
	head->next=p;
	while(q){
		p=q;
		q=p->next;
		p->next=head->next;
		head->next=p;
	}
}

void print(node *head){
	node *p=head->next;
	for(p;p;p=p->next){
		printf("%d ",p->data); 
	}
	printf("\n");
}

node *re_no(node *head){
	node *p=head->next;
	node *q=p->next;
	head->next=NULL;
	while(p){
		p->next=head;
		head=p;
		p=q;
		if(p)q=p->next;
	}
	return head;
}

node *add_no(node *head,int data){
	if(head==NULL){
		node *p=(node *)malloc(sizeof(node));
		p->data=data;
		p->next=NULL;
		head=p;
	}else{
		node *p=(node *)malloc(sizeof(node));
		p->data=data;
		node *tail=head;
		for(tail;tail->next;tail=tail->next);
		p->next=tail->next;
		tail->next=p;
	}
	return head;
}

void print_no(node *head){
	for(head;head;head=head->next){
		printf("%d ",head->data);
	}
	printf("\n");
}

int main(){
	node *head=(node *)malloc(sizeof(node));
	head->next=NULL;
	int num;
	while(true){
		scanf("%d",&num);
		if(num!=-1){
			add(head,num);
		}else{
			break;
		}
	} 
	print(head);
	re(head);
	print(head);
	
	printf("无头结点的情况：\n");
	node *Head;
	Head=NULL;
	while(true){
		scanf("%d",&num);
		if(num!=-1){
			Head=add_no(Head,num);
		}else{
			break;
		}
	} 
	print_no(Head);
	Head=re_no(Head);
	print_no(Head);
	return 0;
}
