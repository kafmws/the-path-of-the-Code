#include<stdio.h>
#include<string.h>//([([]())(()[])])

int judge(char str[],int n,int num);

int main() {
	int i,j,time;
	char exam[5][10000];
	scanf("%d%*c", &time);
	for (i = 0; i < time; i++) {
		scanf("%[^\n]%*c", &exam[i]);
	}
	for (i = 0; i < time; i++) {
		if(strlen(exam[i])%2==0) {
			if(judge(exam[i],strlen(exam[i]),-1)) {
				i+1==time?printf("YES"):printf("YES\n");
			} else {
				i+1==time?printf("NO"):printf("NO\n");
			}
		} else {
			i+1==time?printf("NO"):printf("NO\n");
		}
	}
	return 0;
}
int judge(char str[],int n,int num) {
	char re[10000];
	int i=0,j=0,flag=1,y;
	num=n;
	i--;
	while((i++)<n) {
		y=1;
		if(str[i]=='[') {//有相邻的匹配括号就跳过
			if(str[i+1]==']') {
				y=0;
				i+=2;
				continue;
			}
		} else if(str[i]=='(') { //有相邻的匹配括号就跳过
			if(str[i+1]==')') {
				y=0;
				i+=2;
				continue;
			}
		}if(y) {
			re[j++]=str[i];
			re[j]='\0';
		}
	}
	n=strlen(re);
	if(n!=0) { //判断括号能否完全匹配
		if(num==n) {//如果重录一遍未有改动说明不匹配 
			flag=0;
		} else {
			judge(re,n,num);
		}
	}
	return flag;
}

