#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *multiply(int num, char *obj) {//单个数字进行大数计算，单次相乘不可超过int
	int i, tem, t = 0;
	char ttt[25];
	if (num == 0) {
		obj[0] = '\0';
		return obj;
	}
	if (num == 1) {
		return obj;
	}
	for (i = 0; i < strlen(obj); i++) {
		tem = (obj[i] - '0')*num + t;
		t = tem / 10;
		obj[i] = tem % 10 + '0';
	}
	if (t) {
		itoa(t, ttt, 10);
		for (i = 0; i < strlen(ttt) / 2; i++) {
			char c = ttt[i];
			ttt[i] = ttt[strlen(ttt) - i - 1];
			ttt[strlen(ttt) - i - 1] = c;
		}//翻转
		obj = strcat(obj,ttt);
	}
	return obj;
}

int main() {
	printf("请输入数字:\n");
	int n,i,len;
	char num[10005];
	scanf("%s",num);
	n=atoi(num);
	len=strlen(num);
	for(i=0; i<len/2; i++) {
		char c=num[i];
		num[i]=num[len-i-1];
		num[len-i-1]=c;
	}//翻转
	if(n==0||n==1) {
		printf("1");
	} else if(n>0) {
		n--;//n已在数组中 
		while(multiply(n--,num)&&n>1);
		for(i=strlen(num)-1; i>=0; i--) {
			printf("%c",num[i]);
		}
	}
	return 0;
}
