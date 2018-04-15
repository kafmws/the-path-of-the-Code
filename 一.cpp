#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max(a,b) a>b?a:b
int judge(char *str,int n,int x,int len) {
	if(n==x){
		return len;
	}int i,j;
	for(i=n; i<sizeof(str); i++) {
		for(j=i+1; j<sizeof(str); j++) {
			if(str[i]==str[j]) {
			return	judge(str,n+1,x,len);
			}
		}
	}len=max(j-i,len);
	judge(str,n+1,x,len);
}
int main() {
	int i,j,k=0,len=0,x;
	char *str,cp[100],flag=1;
	str=(char *)malloc(1000*sizeof(char));
	scanf("%s",str);
	x=strlen(str);
	for(i=0;i<x;i++)
	len=judge(str,i,x,0);
	printf("%d",len);
return 0;
}
