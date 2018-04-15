#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max(a,b) a>b?a:b
int main() {
	int i,j,k=0,len=0,t=0;
	char *str,cp[100],flag=1;
	str=(char *)malloc(1000*sizeof(char));
	scanf("%s",str);
	for(i=0; i<sizeof(str); i++) {
		t=0;
		for(j=i+1; j<sizeof(str); j++) {
			if(str[i]!=str[j]) {
				t++;
			} else {
				flag=0;
				break;
			}
		}len=max(len,t+1);
	}
	printf("%d",len);
	return 0;
}
