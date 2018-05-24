#include<stdio.h>
#include <string.h>
int main() {
	char num1[10000];
	char num2[10000];
	char c;
	int t,tem,i,len1=0,len2=0;//t 进位
	while(scanf("%c",&c)&&c!='\n') {
		num1[len1++]=c;
	}
	while(scanf("%c",&c)&&c!='\n') {
		num2[len2++]=c;
	}//录入数据
	for(i=0; i<len1/2; i++) {
		c=num1[i];
		num1[i]=num1[len1-i-1];
		num1[len1-i-1]=c;
	}
	for(i=0; i<len2/2; i++) {
		c=num2[i];
		num2[i]=num2[len1-i-1];
		num2[len2-i-1]=c;
	}//翻转
	t=0;
	if(len1>len2) { //选择长位数保存结果
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
	if(t) { //处理进位
		if(len1>len2) { //选择长位数保存进位
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
	if(t) { //位数溢出
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
