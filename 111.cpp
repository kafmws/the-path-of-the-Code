#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h> 
int main() {
	int i,len,flag=1;
	char str[505],c=97;
	while(c!=EOF) {
		i=0;
		while((c=getchar())!='\n') {
			if((c>='0'&&c<='9')||(c>='a'&&c<='z')||(c>='A'&&c<='Z')){
				str[i++]=c;
			}
		}
		str[i]='\0';
		len=strlen(str);
		for(i=0; i<=len/2; i++) {
			if(toupper(str[i])!=toupper(str[len-i])){
				flag=0;
				break;
			}
		}
		if(flag){
			printf("true");
		}else{
			printf("false");
		}
	}
	return 0;
}
