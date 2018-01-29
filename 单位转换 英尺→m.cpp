#include<stdio.h>
main()
{ 
float a,b,c;
printf("请输入(英尺 英寸):\n");//输入格式改为英尺.英寸时有奇怪现象 
scanf("%f %f",&a,&b);
c=a+b/12.0;
printf("%f\n",c);
printf("TA 的身高是%.4fm\n",c*0.3048);
return 0;}
