////简易方法:逆序输出容易，逆序的逆序就是正序，先把数字倒过来，
////再逆序输出
//int t=0,num，d;
//scnaf("%d",&num);
//do{
//	d=num%10;//得到最后一位数，它其实就是逆序后的首位
//	num/=10; //去掉最后一位数
//	t=t*10+d;
//} while(num>0);
#include<stdio.h>
int main() {
	int num,i=1,flag=1;
	scanf("%d",&num);
	while(i<num&&(num-i)>i) {
		i*=10;
	}
	for(; i>0; i/=10) {
//			if(i==1){
//				printf("%d",num/i);
//				continue;     使最后一位输出后没有空格。
		printf("%d ",num/i);
		num%=i;
	}
	return 0;
}
