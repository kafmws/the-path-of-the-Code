#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int num;
	struct Node *next;
} node;

void add(node *head, int n) {
	int i = 2;
	node *tail=head;
	for (i = 2; i <= n; i++) {
		node *p = (node *)malloc(sizeof(node));
		p->num = i;
		for (; tail->next!=head; tail = tail->next);
		p->next = tail->next;
		tail->next = p;
	}
}

void print(node *head) {
	node *p = head;
	for (p; p->next != head; p = p->next) {
		printf("%d ", p->num);
	}
	printf("%d", p->num);
	printf("\n");
}

node *kill(node *head, int n) {
	int cnt = 0;
	node *p = head;
	for (p; p; p = p->next) {
		cnt++;
		if (cnt == n - 1) {
			if (p->next != p) {//不为一 
				node *dead = p->next;
				p->next = dead->next;
				if (dead == head) {
					head = dead->next;
				}
				free(dead);
				cnt = 0;
				//print(head);
			}
			else {
				return head;
			}
		}
	}
}

int main() {
	node *head = (node *)malloc(sizeof(node));
	head->num = 1;
	head->next = head;
	int n, m;
	printf("请输入n和m：\n");
	scanf("%d%d", &n, &m);
	add(head, n);
	//print(head);
	head=kill(head, m);
	printf("%d", head->num);
	return 0;
}
