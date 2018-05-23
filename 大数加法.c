#include<stdio.h>
#include <string.h>
int main() {
	char num1[10000]= {0},len1=0;
	char num2[10000]= {0},len2=0;
	char t,tem;//c 进位
	while(scanf("%c",&t)&&t!='\n') {
		num1[len1++]=t-'0';
	}
	num1[len1]='\0';
	while(scanf("%c",&t)&&t!='\n') {
		num2[len2++]=t-'0';
	}
	num1[len2]='\0';
	//读入数据  存为数字
	int min = len1<len2?len1:len2,i,max=len1+len2-min;//len short
	for(i=0;i<len1/2;i++){
		t=num1[i];
		num1[i]=num1[len1-i-1];
		num1[len1-i-1]=t;
	}
	for(i=0;i<len2/2;i++){
		t=num2[i];
		num2[i]=num2[len1-i-1];
		num2[len1-i-1]=t;
	}//翻转 
	t=0;
	if(min==len1)
		for(i=0; i<min; i++) {
			tem=num1[i]+num2[i]+t;
			t=tem/10;
			num2[i]=tem%10;
		}
	else {
		for(i=0; i<min; i++) {
			tem=num1[i]+num2[i]+t;
			t=tem/10;
			num1[i]=tem%10;
		}
	}
	if(t) { //处理进位
		if(len1>len2)//数组1 
			for(i=min; i<max; i++) {
				tem=t+num1[i];
				t=tem/10;
				num1[i]=tem%10;
				if(t==0) {
					break;
				}
			}
		else {//数组2
			for(i=min; i<max; i++) {
				tem=t+num2[i];
				t=tem/10;
				num2[i]=tem%10;
				if(t==0) {
					break;
				}
			}
		}
	}
	if(t){
		print("%d",t);
	}
	if(len1>len2)
	for(i=max-1;i>=0;i--){
		printf("%d",num1[i]); 
	}else
		for(i=max-1;i>=0;i--){
		printf("%d",num2[i]); 
	} 
	return 0;
}
