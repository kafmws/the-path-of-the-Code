#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} node;

void add(node *head,int data) {
	node *p=(node *)malloc(sizeof(node));
	p->data=data;
	p->next=head->next;
	head->next=p;
}

void print(node *head){
	node *p=head->next;
	for(p;p;p=p->next){
		printf("%d ",p->data);
	}
	printf("\n");
} 

void delete_cmp(node *headA,node *headB){
	node *a=headA;
	node *b=headB->next;
	for(a;a->next;a=a->next){
		for(b=headB->next;b;b=b->next){
			if(a->next->data==b->data){
				node *dead=a->next;
				a->next=dead->next;
				free(dead);
			}
		}
	}
}

int main() {
	node *headA=(node *)malloc(sizeof(node));
	node *headB=(node *)malloc(sizeof(node));
	headA->next=headB->next=NULL;
	int num;
	printf("录入链表A的数据(-1结束):\n");
	while(true) {
		scanf("%d",&num);
		if(num!=-1){
			add(headA,num);
		}else{
			break;
		}
	}
	printf("录入链表B的数据(-1结束):\n");
	while(true) {
		scanf("%d",&num);
		if(num!=-1){
			add(headB,num);
		}else{
			break;
		}
	}
	delete_cmp(headA,headB);
	print(headA);
	return 0;
}
