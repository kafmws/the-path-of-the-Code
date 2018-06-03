#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} node;

node *add(node *head,int data) {
	if(head==NULL) {
		node *p=(node *)malloc(sizeof(node));
		p->next=NULL;
		p->data=data;
		head=p;
	} else {
		node *tail=head;
		for(tail; tail->next; tail=tail->next);
		node *p=(node *)malloc(sizeof(node));
		p->data=data;
		p->next=tail->next;
		tail->next=p;
	}
	return head;
}

void print(node *head) {
	for(head; head; head=head->next) {
		printf("%d ",head->data);
	}
	printf("\n");
}

void combine(node *A,node *B) {
	node *a=A->next;
	node *b=B->next;
	if(A->data>B->data){
		int t=A->data;
		A->data=B->data;
		B->data=t;
	}
	while(a&&b) {
		if(a->data<b->data) {
			A->next=a;
			A=a;
			a=a->next;
		} else {
			A->next=b;
			A=b;
			b=b->next;
		}
	}
	while(a) {
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
	node *A=NULL,*B=NULL;
	int num;
	printf("录入链表L1的数据(-1)结束:\n");
	while(true) {
		scanf("%d",&num);
		if(num!=-1) {
			A=add(A,num);
		} else {
			break;
		}
	}
	printf("录入链表L2的数据(-1)结束:\n");
	while(true) {
		scanf("%d",&num);
		if(num!=-1) {
			B=add(B,num);
		} else {
			break;
		}
	}
	if(A&&B)
	combine(A,B);
	print(A);
	return 0;
}

