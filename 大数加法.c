#include<stdio.h>
#include <string.h>
int main() {
	char num1[10000];
	char num2[10000];
	char c;
	int t,tem,i,len1=0,len2=0;//t ��λ
	while(scanf("%c",&c)&&c!='\n') {
		num1[len1++]=c;
	}
	while(scanf("%c",&c)&&c!='\n') {
		num2[len2++]=c;
	}//¼������
	for(i=0; i<len1/2; i++) {
		c=num1[i];
		num1[i]=num1[len1-i-1];
		num1[len1-i-1]=c;
	}
	for(i=0; i<len2/2; i++) {
		c=num2[i];
		num2[i]=num2[len1-i-1];
		num2[len2-i-1]=c;
	}//��ת
	t=0;
	if(len1>len2) { //ѡ��λ��������
		for(i=0; i<len2; i++) {
			tem=num1[i]-'0'+num2[i]-'0'+t;
			t=tem/10;
			num1[i]=tem%10+'0';
		}
	} else {
		for(i=0; i<len1; i++) {
			tem=num2[i]-'0'+num2[i]-'0'+t;
			t=tem/10;
			num2[i]=tem%10+'0';
		}
	}
	if(t) { //�����λ
		if(len1>len2) { //ѡ��λ�������λ
			for(i; i<len1; i++) {
				tem=num1[i]-'0'+t;
				t=tem/10;
				num1[i]=tem%10+'0';
				if(t==0) {
					break;
				}
			}
		} else {
			for(i; i<len2; i++) {
				tem=num2[i]-'0'+t;
				t=tem/10;
				num2[i]=tem%10+'0';
				if(t==0) {
					break;
				}
			}
		}
	}
	if(t) { //λ�����
		printf("%d",t);
	}
	if(len1>len2) {
		for(i=len1-1; i>=0; i--)
			printf("%c",num1[i]);
	} else {
		for(i=len2-1; i>=0; i--)
			printf("%c",num2[i]);
		}
	return 0;
}
