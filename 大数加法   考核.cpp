#include<stdio.h>


int strlen(char *obj){
	int i;
	for(i=0;;i++){
		if(obj[i]=='\0'){
			break;
		}
	}
	return i;
}

int main() {
	char num[10000]={"100225701207272126567921164630133110237025773515"};
	char obj[10000];
	int i,j=0,t=0,tem,len,len1,len2;
	scanf("%s",obj);
	for(i=strlen(num)-1;i>=0;i--){
		printf("%c",num[i]);
	}printf("\n");
	len1=strlen(num);
	len2=strlen(obj);
	len=len1<len2?len2:len1;
	for(i=len2;i<10000;i++){
		obj[i]='0';
	}obj[i]='\0';
	for(i=0;i<len;i++){
		tem=num[i]-'0'+obj[len2-i-1]-'0'+t;
		t=tem/10;
		num[j++]=tem%10+'0';
	}
	if(t){
		printf("%d",t);
	}
	for(i=strlen(num)-1;i>=0;i--){
		printf("%c",num[i]);
	}
	return 0;
}
