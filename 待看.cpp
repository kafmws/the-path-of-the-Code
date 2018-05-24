#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{int CompositeNumFilterV3(int);
 int m,c;
 cin>>m;
 c=CompositeNumFilterV3(m);
 cout<<c<<endl;
return 0;
}//求素数的程序
int CompositeNumFilterV3(int n)
{ 
 int i, j; 
 //素数数量统计
 int count = 0; 
 // 分配素数标记空间，明白+1原因了吧，因为浪费了一个flag[0] 
 char* flag = (char*)malloc( n+1 ); 
 // 干嘛用的，请仔细研究下文 
 int mpLen = 2*3*5*7*11*13; 
 char magicPattern[2*3*5*7*11*13]; // 奇怪的代码，why，思考无法代劳，想！  
 for (i=0; i<mpLen; i++)
 {
  magicPattern[i++] = 1;  
  magicPattern[i++] = 0;  
  magicPattern[i++] = 0;  
  magicPattern[i++] = 0;  
  magicPattern[i++] = 1;  
  magicPattern[i] = 0; 
 } 
 for (i=4; i<=mpLen; i+=5)  
  magicPattern[i] = 0; 
 for (i=6; i<=mpLen; i+=7)  
  magicPattern[i] = 0; 
 for (i=10; i<=mpLen; i+=11)  
  magicPattern[i] = 0; 
 for (i=12; i<=mpLen; i+=13)  
  magicPattern[i] = 0;  // 新的初始化方法,将2,3,5,7,11,13的倍数全干掉 
  // 而且采用memcpy以mpLen长的magicPattern来批量处理  
 int remainder = n%mpLen; 
 char* p = flag+1; 
 char* pstop = p+n-remainder; 
 while (p < pstop) 
 {  
  memcpy(p, magicPattern, mpLen);  
  p += mpLen; 
 }
  if (remainder > 0) 
  {  
   memcpy(p, magicPattern, remainder); 
  } 
  flag[2] = 1; 
  flag[3] = 1; 
  flag[5] = 1; 
  flag[7] = 1; 
  flag[11] = 1; 
  flag[13] = 1;    // 从17开始filter，因为2,3,5,7,11,13的倍数早被kill了  
  // 到n/13止的，哈哈，少了好多吧 
  int stop = n/13; 
  for (i=17; i <= stop; i++) 
  {  
   // i是合数，请歇着吧，因为您的工作早有您的质因子代劳了   
  if (0 == flag[i]) continue;    
  // 从i的17倍开始过滤  
  int step = i*2;  
  for (j=i*17; j <= n; j+=step)  
  {   
  flag[j] = 0;  
  } 
  }  
  
  // 统计素数个数 
  for (i=2; i<=n; i++) 
  {  
   if (flag[i]) count++; 
  }   
     
  // 释放内存，别忘了传说中的内存泄漏  
  free(flag);  
  
  return count;
}


