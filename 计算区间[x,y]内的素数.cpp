#include<stdio.h>
#include<math.h>
int judge(int a) {
	int i,flag=1;
	for(i=2; i<=(int)sqrt(a); i++) {
		if(a%i==0) {
			flag=0;
			break;
		}
	}
	return flag;
}
int main() {
	int a,b,i,count=0;
	scanf("%d %d",&a,&b);
	for(i=a==0||a==1?2:a; i<=b; i++) {
		if(judge(i)||a==2) {
			printf("%d\n",i);
			count++;
		}
	}
	printf("\n[%d,%d]内共有%d个素数。",a,b,count);
	return 0;
}
