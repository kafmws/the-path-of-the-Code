#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *multiply(int num, char *obj) {//单个数字进行大数计算，单次相乘不可超过int
	int i, tem, t = 0;
	char ttt[25];
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
	int n,i,num;
	char obj[10000];
	printf("请输入底数，指数:\n");
	scanf("%s%d",obj,&n);
	num=atoi(obj);
	if (n == 0) {
		obj[0] = '1';
		obj[1] = '\0';
	}
	if(n==0&&num==0) {
		printf("error");
	}
	int len=strlen(obj);
	for(i=0;i<len/2;i++){
		char c=obj[i];
		obj[i]=obj[len-i-1];
		obj[len-i-1]=c;
	}//翻转 
	for(i=1; i<n; i++) {//本身就是一次方 
		multiply(num,obj);
	}
		for(i=strlen(obj)-1; i>=0; i--) {
			printf("%c",obj[i]);
		}
	return 0;
}
