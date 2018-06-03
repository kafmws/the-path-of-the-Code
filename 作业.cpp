#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char *string_exam(int down,int up ,int judge) {//字符串获取检查函数    down~up   字符串字节数限制
	char *str = (char *)malloc(sizeof(char)*1000);// judge 开关   是否开启数字检查、汉字检查
	scanf("%s", str);
	int flag = 1, i;
	do {
		if (judge) {//进行检查检查
			if (judge == 1) {
				for (i = 0; i < strlen(str); i++) {
					if (isdigit(str[i]) == 0) {//全为数字
						flag = 0;
						break;
					}
				}
			} else if (judge == 2) {
				for (i = 0; i < strlen(str); i++) {
					if (0<=str[i]&&str[i]<=255) {//汉字检查
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
