#include<stdio.h>
#include<math.h>
int judge(int a,int seq[]) {
	int j=0,flag=1;
	for(; seq[j]*seq[j]<=a
	; j++) {
		if(a%seq[j]==0) {
			flag=0;
			break;
		}
	}
	return flag;
}
int main() {
	int i,a,cnt=0,seq[1000]={2,3,5};
	scanf("%d",&a);
	for(i=2; i<=a; i++) {
		if(judge(i,seq)) {
			seq[cnt++]=i;
		}

	}
	printf("%d\n",seq[cnt-1]);
	printf("%d",cnt);
	return 0;
}
