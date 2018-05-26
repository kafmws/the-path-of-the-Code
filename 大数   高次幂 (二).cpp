#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int num,n,i,j;//num 底数   n  指数
	printf("请输入底数，指数:\n");
	char obj[20000]= {0},len,t,tem;
	scanf("%s%d",obj,&n);//len 当前数的长度
	len=strlen(obj);
	num=atoi(obj);
	if(n==0) {
		if(num==0) {
			printf("error");
		}else{
			printf("1");
		}
	} else {
		for(i=1; i<n; i++) {
			t=0;
			for(j=0; j<len; j++) {
				tem=(obj[j]-'0')*num+t;
				t=tem/10;
				obj[j]=tem%10+'0';
			}
			while(j==len&&t!=0) {
				obj[len++]=t%10+'0';
				t/=10;
			}
		}
		for(i=len-1; i>=0; i--) {
			printf("%c",obj[i]);
		}
	}
	return 0;
}
