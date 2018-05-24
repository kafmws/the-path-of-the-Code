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
	struct linkedlist *head;//ͷָ��
	struct linkedlist *tail;//βָ��
}List;//��������


void create(List *list) {//����
	printf("���������֣�-1��ʾ����\n");
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
		list->tail = p;//β�巨
	}
}

void add(List *list) {//����
	int num;
	printf("����������:\n");
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
	list->tail = p;//β�巨
}

void print(List *list) {//��ӡ  
	node *p = list->head->next;
	for (p; p; p = p->next) {
		printf("%d ", p->data);
	}
	printf("\n");
}

void print_re(List *list) {//�����ӡ
	node *p = list->tail;
	for (p; p!=list->head; p = p->pre) {
		printf("%d ", p->data);
	}
	printf("\n");
}

void kill(List *list) {//ɾ��
	int num,flag=0;
	printf("��������ɾ����:\n");
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
	list.tail = list.head;//ͷ���Ĵ���������ĳ�ʼ��
	create(&list);
	system("cls");
	int choice;
	while (1) {
		printf("1.		����\n2.		����\n3.		����\n4.		ɾ��\n��ѡ��\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:print(&list); _getch(); system("cls"); break;
			case 2:print_re(&list); _getch(); system("cls"); break;
			case 3:add(&list); _getch(); system("cls"); break;
			case 4:kill(&list); _getch(); system("cls"); break;
			default:
				printf("������ѡ��");
				system("cls"); break;
		}
	}
	return 0;
}
