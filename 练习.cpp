#include<stdio.h>
#include<math.h>
int judge(int a){
	int j=2,flag=1;
	for(;j<=sqrt(a);j++){
		if(a%j==0){
			flag=0;
			break;
		}
	}
	return flag;
}
int main(){
	int a,b,i,cnt;
	scanf("%d %d",&a,&b);
	if(a<=2){
		printf("%d\n",2);
		a=3;
	}
	for(i=a;i<=b;i++){
		if(judge(i)){
			printf("%d\n",i);
			cnt++;
		}
	}
	printf("   toally   %d",cnt);
	return 0;
}
