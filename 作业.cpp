#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
#define min(a,b)  a>b?b:a

void itoa(int n,char *num){
	
}
int main() {
	int i,j,k,z,a,b,cnt,hate,flag2,flag1,n=1;
	char *num;
	num=(char *)malloc(sizeof(char)*15);
	while(scanf("%d %d",&a,&b)!=EOF) {
		cnt=hate=0;
		for(i=a; i<=b; i++) {
			flag2=flag1=0;
			itoa(i,num);
			for(j=0; j<strlen(num); j++) {
				if(num[j]=='5') {
					if(num[j+1]=='2'&&num[j+2]=='1') {
						cnt++;
						hate++;
					} else {
						for(k=0; k<strlen(num); k++) {
							if(num[k]=='2') {
								flag2=1;
								break;
							}
						}
						for(z=0; z<strlen(num); z++) {
							if(num[z]=='1') {
								flag1=1;
								break;
							}
						}
						if(flag1&&flag2) {
							cnt++;
						}
					}
				}
			}
		}
		printf("Case %d:%d %d\n",n,cnt,hate);
		n++;
	}
	return 0;
}

