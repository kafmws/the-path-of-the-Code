#include<stdio.h>
#include<string.h>
int main() {
	int num[80000] = { 1 }, i, j;
	int t = 0, len = 1, tem;//t  进位   len  当前结果的长度
	for (i = 1; i <= 100; i++) {
		t = 0;
		for (j = 0; j<len; j++) {
			tem = num[j] * 3;
			num[j] = (tem + t) % 10;
			t = (tem + t) / 10;
			if (t != 0 && j == len - 1) {
				len++;
			}
		}
	}//计算3^100的结果保存在数组num中
	//for (i = len - 1; i >= 0; i--) {
	//  printf("%d", num[i]);
	//}printf("\n");
	char ttt[10000];// t 进位
	int obj[10000];
	scanf("%[^\n]*c", ttt);
	j = strlen(ttt);
	for (i = 0; i < j; i++) {
		obj[i] = ttt[i] - '0';
	}//将字符串转存成int数组
	for (i = 0; i < j/2; i++) {
		char c = obj[i];
		obj[i] = obj[j - i - 1];
		obj[j - i - 1] = c;
	}//翻转
	/*for (i = 0; i < j; i++) {
	    printf("%d", obj[i]);
	}printf("\n");*/
	t = 0;
	for (i = 0; i < j; i++) {
		tem = num[i] + obj[i] + t;
		t = tem / 10;
		num[i] = tem % 10;
		obj[i] = tem % 10;
	}//相加
	if (t) {//处理进位
		if (len - 1 > j) {//选择长位数保存结果
			for (i; i < len - 1; i++) {
				tem = num[i] + t;
				t = tem / 10;
				num[i] = tem % 10;
				if (t = 0) {
					break;
				}
			}
		} else {
			for (i; i < j; i++) {
				tem = obj[i] + t;
				t = tem / 10;
				obj[i] = tem % 10;
				if (t = 0) {
					break;
				}
			}
		}
	}
	if (t) {
		printf("%d", t);
	}
	if(len-1>j)//判断该输出哪个数组
		for (i = len - 1; i >= 0; i--) {
			printf("%d", num[i]);
		}
	else {
		for (i = j-1; i >= 0; i--) {
			printf("%d", obj[i]);
		}
	}

	getchar();
	return 0;
}

