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
		printf("请输入第%d个学生的信息：\n",i+1);
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
	printf("学号序\n");
	for(i=0; i<10; i++) {
		printf("学号%d 姓名%s 成绩%d\n",stu[i].num,stu[i].name,stu[i].score);
	}
	printf("成绩序\n");
	for(i=0; i<10; i++) {
		printf("学号%d 姓名%s 成绩%d\n",p[i]->num,p[i]->name,p[i]->score);
	}
	printf("姓名序\n");
	for(i=0; i<10; i++) {
		printf("学号%d 姓名%s 成绩%d\n",q[i]->num,q[i]->name,q[i]->score);
	}
	return 0;
}
