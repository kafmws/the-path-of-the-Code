#include<stdio.h>
#include<string.h>
int main() {
	int i,j,len=0,flag=1;
	char str[1000];
	scanf("%s",str);
	for(i=1; i<strlen(str); i++) {
		for(j=i-1; j>=0; j--) {
			if(str[i]==str[j]) {
				flag=0;
				break;
			}
		}
		if(flag) {
			len=len>(i-j)?len:(i-j);
		}else{
			len=len>(i-j-1)?len:(i-j-1);
		}
	}
	printf("%d",len);
	return 0;
}
