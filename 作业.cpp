#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char *string_exam(int down,int up ,int judge) {//�ַ�����ȡ��麯��    down~up   �ַ����ֽ�������
	char *str = (char *)malloc(sizeof(char)*1000);// judge ����   �Ƿ������ּ�顢���ּ��
	scanf("%s", str);
	int flag = 1, i;
	do {
		if (judge) {//���м����
			if (judge == 1) {
				for (i = 0; i < strlen(str); i++) {
					if (isdigit(str[i]) == 0) {//ȫΪ����
						flag = 0;
						break;
					}
				}
			} else if (judge == 2) {
				for (i = 0; i < strlen(str); i++) {
					if (0<=str[i]&&str[i]<=255) {//���ּ��
						flag = 0;
						break;
					}
				}
			}
		}
		while (flag == 0 || (strlen(str) < down || strlen(str) > up)) {
			printf("error\n");
			scanf("%s", str);
		}
	} while ((flag == 0) && (flag = 1));
	return str;
}

int main(){
	char *str;
	str=string_exam(6,12,0);
	puts(str);
	free(str); 
	str=string_exam(6,1000,0);
	puts(str);
	free(str);
	str=string_exam(6,1000,0);
	puts(str);
	str=string_exam(6,120,0); 
	puts(str);
	return 0;
} 
