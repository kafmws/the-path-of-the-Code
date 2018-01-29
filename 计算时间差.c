#include<stdio.h>
int main(void)
{
	int h1,h2,m1,m2;
	printf("请输入两个时间段 h:m ：\n");
	scanf("%d:%d",&h1,&m1);
	scanf("%d:%d",&h2,&m2);
	if((h1<0||h2<0)||(m1>=60)||(m1<0)||(m2>=60)||(m2<0))
	{
		printf("error");
	}
	else
	{
		int x,y;
		x=h1*60+m1,y=h2*60+m2;
		if(x<y)
		{
			int t;
			t=x,x=y,y=t;
		}
		printf("The gap between the two times is %dh:%dm.",(x-y)/60,(x-y)%60);
	 } 
}
