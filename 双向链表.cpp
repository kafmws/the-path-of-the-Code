#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
typedef struct linkedlist {
	int data;
	struct linkedlist *next,*pre;
}node;

typedef struct ctrl {
	struct linkedlist *head;//头指针
	struct linkedlist *tail;//尾指针
}List;//链表类型


void create(List *list) {//创建
	printf("请输入数字，-1表示结束\n");
	int num;
	while (scanf("%d", &num) && num != -1) {
		node *p = (node *)malloc(sizeof(node));
		p->data = num;
		p->next = list->tail->next;
		if(list->tail->pre){
			p->pre = list->tail;
			list->tail->next = p;
		}
		else {
			p->pre = list->head;
			list->head->next = p;
		}
		list->tail = p;//尾插法
	}
}

void add(List *list) {//增加
	int num;
	printf("请输入数字:\n");
	scanf("%d", &num);
	node *p = (node *)malloc(sizeof(node));
	p->data = num;
	p->next = list->tail->next;
	if (list->tail->pre) {
		p->pre = list->tail;
		list->tail->next = p;
	}
	else {
		p->pre = list->head;
		list->head->next = p;
	}
	list->tail = p;//尾插法
}

void print(List *list) {//打印  
	node *p = list->head->next;
	for (p; p; p = p->next) {
		printf("%d ", p->data);
	}
	printf("\n");
}

void print_re(List *list) {//倒序打印
	node *p = list->tail;
	for (p; p!=list->head; p = p->pre) {
		printf("%d ", p->data);
	}
	printf("\n");
}

void kill(List *list) {//删除
	int num,flag=0;
	printf("请输入想删除的:\n");
	scanf("%d", &num);
	node *p = list->head->next;
	for (p; p; p = p->next) {
		if (p->data == num) {
			if (p == list->head->next) {
				//list->head = p->next;
				p->pre->next = p->next;
				p->next->pre = p->pre;
				flag = 1; break;
			}
			else if (p == list->tail) {
				list->tail = p->pre;
				list->tail->next = NULL;
				flag = 1; break;
			}
			else {
				p->pre->next = p->next;
				p->next->pre = p->pre;
				flag = 1; break;
			}
		}
	}if(flag)free(p);
}

int main() {
	List list;
	list.head = (node *)malloc(sizeof(node));
	list.head->pre = list.head->next=NULL;
	list.tail = list.head;//头结点的创建及链表的初始化
	create(&list);
	system("cls");
	int choice;
	while (1) {
		printf("1.		正序\n2.		逆序\n3.		增加\n4.		删除\n请选择：\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:print(&list); _getch(); system("cls"); break;
			case 2:print_re(&list); _getch(); system("cls"); break;
			case 3:add(&list); _getch(); system("cls"); break;
			case 4:kill(&list); _getch(); system("cls"); break;
			default:
				printf("请重新选择");
				system("cls"); break;
		}
	}
	return 0;
}
