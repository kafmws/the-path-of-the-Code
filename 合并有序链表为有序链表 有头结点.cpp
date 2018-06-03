#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} node;

void add(node *head,int data) {
	node *p=(node *)malloc(sizeof(node));
	p->data=data;
	node *tail=head;
	for(tail;tail->next;tail=tail->next); 
	p->next=tail->next; 
	tail->next=p;
}

void print(node *head){
	for(head=head->next;head;head=head->next){
		printf("%d ",head->data);
	}
	printf("\n");
}

void combine(node *A,node *B) {
	node *a=A->next;
	node *b=B->next;
	while(a&&b){
		if(a->data<b->data){
			A->next=a;
			A=a;
			a=a->next;
		}else{
			A->next=b;
			A=b;
			b=b->next;
		}
	}
	while(a){
		A->next=a;
		A=a;
		a=a->next;
	}
	while(b){
		A->next=b;
		A=b;
		b=b->next;
	}
}

int main() {
	node *A=(node *)malloc(sizeof(node));
	node *B=(node *)malloc(sizeof(node));
	A->next=B->next=NULL;
	int num;
	printf("录入链表L1的数据(-1)结束:\n");
	while(true) {
		scanf("%d",&num);
		if(num!=-1) {
			add(A,num);
		} else {
			break;
		}
	}
	printf("录入链表L2的数据(-1)结束:\n");
	while(true) {
		scanf("%d",&num);
		if(num!=-1) {
			add(B,num);
		} else {
			break;
		}
	}
	combine(A,B);
	print(A);
	return 0;
}

