#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define min(a,b)  a>b?b:a

int main() {
	int i,j,a,b;
	char m[30],n[30],re[30];
	scanf("%s %s",m,n);
	while((m[0]-'0')&&(n[0]-'0')){
		j=0;
		for(i=strlen(m)-1;i>=0;i--){
			re[j++]=m[i];
		}
		re[j]='\0';
		a=atoi(re);
		for(j=strlen(n)-1;j>=0;j--){
			re[i++]=n[j];
		}
		re[i]='\0';
		b=atoi(re);
		printf("%d\n",a+b);
		scanf("%s %s",m,n);
	}
	return 0;
}

