#include<stdio.h>
#include<string.h>
#include<string.h>
typedef struct Node {
	int num;
	char name[15];
	int score;
} node;

int main() {
	node stu[10];
	int i=0,j;
	while(i<10) {
		printf("�������%d��ѧ������Ϣ��\n",i+1);
		scanf("%d%s%d",&stu[i].num,stu[i].name,&stu[i].score);
		i++;
	}
	node *p[10],*q[10];
	for(i=0; i<10; i++) {
		p[i]=q[i]=&stu[i];
	}
	for(i=1; i<=10; i++) {
		for(j=0; j<10-i; j++) {
			if(p[j]->score<p[j+1]->score) {
				node *t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
			if(strcmp(q[j]->name,q[j+1]->name)>0) {
				node *t=q[j];
				q[j]=q[j+1];
				q[j+1]=t;
			}
		}
	}
	printf("ѧ����\n");
	for(i=0; i<10; i++) {
		printf("ѧ��%d ����%s �ɼ�%d\n",stu[i].num,stu[i].name,stu[i].score);
	}
	printf("�ɼ���\n");
	for(i=0; i<10; i++) {
		printf("ѧ��%d ����%s �ɼ�%d\n",p[i]->num,p[i]->name,p[i]->score);
	}
	printf("������\n");
	for(i=0; i<10; i++) {
		printf("ѧ��%d ����%s �ɼ�%d\n",q[i]->num,q[i]->name,q[i]->score);
	}
	return 0;
}
