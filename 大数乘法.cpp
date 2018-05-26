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
char *add(char *num1, char *num2) {//大数加法
	int tem, t, i, len1 = strlen(num1), len2 = strlen(num2);
	t = 0;
	if (len1 < len2)
		for (i = 0; i < len1; i++) {
			tem = num1[i] - '0' + num2[i] - '0' + t;
			t = tem / 10;
			num2[i] = tem % 10 + '0';
		}
	else {
		for (i = 0; i < len2; i++) {
			tem = num1[i] - '0' + num2[i] - '0' + t;
			t = tem / 10;
			num1[i] = tem % 10 + '0';
		}
	}
	if (t) { //处理进位
		if (len1>len2)//数组1
			for (i = len2; i<len1; i++) {
				tem = t + num1[i] -'0';
				t = tem / 10;
				num1[i] = tem % 10 + '0';
				if (t == 0) {
					break;
				}
			}
		else {//数组2
			for (i = len1; i<len2; i++) {
				tem = t + num2[i] - '0';
				t = tem / 10;
				num2[i] = tem % 10 + '0';
				if (t == 0) {
					break;
				}
			}
		}
		if (t) {
			if (len1 > len2) {
				num1[len1 + 1] = '\0';
				num1[len1] = t + '0';
			} else {
				num2[len2 + 1] = '\0';
				num2[len2] = t + '0';
			}
		}
	}
	if (len1 > len2) {//判断该返回那个
		return num1;
	} else {
		return num2;
	}
}
char *addzero(char *num, int n) {//在字符串前加n个零
	int i;
	char tem[10008];
	for (i = 0; i < n; i++) {
		tem[i] = '0';
	}
	tem[i] = '\0';
	num = strcat(tem,num);
	return num;
}

int main() {
	char obj[10005], numtem[10005], num[105], number[105];
	int len = 0, len1 = 0, len2 = 0, i;
	char c;
	printf("请输入两个数字\n");
	rewind(stdin);
	while (scanf("%c", &c) && c != '\n'&&c != ' ') {
		num[len1++] = c ;
	}
	num[len1] = '\0';
	while (scanf("%c", &c) && c != '\n'&&c != ' ') {
		number[len2++] = c ;
	}
	number[len2] = '\0';
	if (strcmp(num, "0") == 0 || strcmp(number, "0") == 0) {
		printf("0");
	}//两因数中一个为0
	else {
		for (i = 0; i < len1 / 2; i++) {
			c = num[i];
			num[i] = num[len1 - i - 1];
			num[len1 - i - 1] = c;
		}
		for (i = 0; i < len2 / 2; i++) {
			c = number[i];
			number[i] = number[len2 - i - 1];
			number[len2 - i - 1] = c;
		}//翻转
		for (i = 0; i < 10005; i++) {
			obj[i] = '0';
		}
		obj[i - 1] = '\0';//初始化
		if (len1 < len2) {
			for (i = 0; i < len1; i++) {
				char ttt[105];
				strcpy(ttt, number);
				strcpy(numtem, multiply(num[i] - '0', ttt));
				strcpy(numtem, addzero(numtem, i));
				strcpy(obj, strcpy(numtem, add(obj, numtem)));
			}
		} else {
			for (i = 0; i < len2; i++) {
				char ttt[105];
				strcpy(ttt, num);
				strcpy(numtem, multiply(number[i] - '0', ttt));
				strcpy(numtem, addzero(numtem, i));
				strcpy(obj, strcpy(numtem, add(obj, numtem)));
			}
		}
		//判断输出位数
		//两数相乘	结果为两个因数位数和或者位数和减一
		if (obj[len1 + len2 - 1] >'0'&&obj[len1 + len2 - 1]<='9') {
			printf("%c", obj[len1 + len2 - 1]);
		}
		for (i = len1 + len2 - 2; i >= 0; i--) {
			printf("%c", obj[i]);
		}
		//puts(obj);
	}
	return 0;
}
