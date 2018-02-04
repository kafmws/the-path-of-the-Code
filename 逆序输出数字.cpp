#include<stdio.h>
int main(){
	int num;
	printf("请输入数字:\n");
	scanf("%d",&num);
	while(num!=0){
		if(num%10!=0)
		 printf("%d",num%10);
		num/=10;
	}
	return 0;
}
//int t=0,num，d;
//scnaf("%d",&num);
//do{
//	d=num%10;//得到最后一位数，它其实就是逆序后的首位
//	num/=10; //去掉最后一位数
//	t=t*10+d; 
//} while(num>0);
