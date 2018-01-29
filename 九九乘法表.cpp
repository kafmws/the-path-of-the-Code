#include<stdio.h>
int main()
{int box[1000]={0};
 int n,x,i,j;
 printf("请输入数据个数：\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {scanf("%d",&x);
  box[x]+=1;
 }
 for(i=1;i<1000;i++)
 if(box[i]!=0)
 {for(j=1;j<=box[i];j++)
  {printf("%d ",i);
  }
 }
 return 0;
}
