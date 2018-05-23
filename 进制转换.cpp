#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	int num,n,i=0;
	char obj[15];
	scanf("%d %d",&num,&n);
	while(num>=1){
			if(num%n>=10){
				obj[i++]=num%n%10+'a';
			}else{
				obj[i++]=num%n+'0';
			}
		num=num/n;
	}obj[i]='\0';
	strrev(obj);
	printf("%s",obj);
	return 0;
}

