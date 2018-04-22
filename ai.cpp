#include<stdio.h>
#include<string.h>
#include <stdio.h>
#include <string.h>
int main() {
	int n=1;
	char a[3],b[10];
	while(scanf("%s %s",a,b)!=EOF) {
		getchar();
		printf("Case %d: ",n++);
		if(a[1]=='b') {
			if(a[0]=='A')
				a[0]='G';
			else
				a[0]=a[0]-1;
			a[1]='#';
			printf("%s %s\n",a,b);
		} else if(a[1]=='#') {
			if(a[0]=='G')
				a[0]='A';
			else
				a[0]=a[0]+1;
			a[1]='b';
			printf("%s %s\n",a,b);
		} else
			printf("UNIQUE\n");
	}
	return 0;
}
