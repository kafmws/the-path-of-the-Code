//#include<stdio.h>
//int main() {
//	int i,j,n,m;
//	scanf("%d %d",&n,&m);
//	int x[n],y[m];
//	for(i=0;i<n;i++){
//		scanf("%d",&x[i]);
//	}for(j=0;j<m;j++){
//		scanf("%d",&x[j]);
//	}
//	int t=0,tem[n][m+1],result[22]= {0}; //t进位
//	for(i=0; i<n; i++) {
//		for(j=0; j<m; j++) {
//			tem[i][j]=(x[i]*y[j])%10+t;
//			t=(x[i]*y[j]+t)/10;
//		}
//	} //可能进位，要多遍历一列；t=(tem[i][j]+result[i]+t)/10;(tem[i][j]+result[i])%10+t;
//	t=0;
//	for(j=0; j<m+1; j++) {
//		for(i=0; i<n; i++) {
//			result[i]+=tem[i][j];
//		}
//		result[i]+=t;
//		t=result[i]/10;
//		result[i]%=10;
//	}
//	for(i=21; i>=0; i--) { //逆序输出
//		if(result[i]!=0) {
//			printf("%d",result[i]);
//		}
//	}
//	return 0;
//}
#include <iostream>
#include<string.h>
using namespace std;
void mul(char *ch1, char *ch2) {
	int len1=strlen(ch1),len2=strlen(ch2);
	char ch3[1000009];
	int i,j,carry;
	for (i=0; i<1000009; i++)
		ch3[i]='\0';//=0
	for (i=0; i<len1; i++) {
		for (j=0; j<len2; j++) { //下面可能asc码大于128
			ch3[i+j]=ch3[i+j]+(ch1[i]-'0')*(ch2[j]-'0');//这里用字符型表示ch3要注意
			if (ch3[i+j]>9&&(i+j)>0) {
				ch3[i+j-1]+=ch3[i+j]/10;
				ch3[i+j]=ch3[i+j]%10;
			}
		}
	}
	for (i=len1+len2-1; i>0; --i) { //防止上面进位时大于9的情况
		if (ch3[i]>9) {
			ch3[i-1]=ch3[i-1]+ch3[i]/10;
			ch3[i]%=10;
		}
	}

	if (ch3[0]>9) { //if (ch[3]>99)
		cout<<ch3[0]/10;
		ch3[0]=ch3[0]%10;
	}
	for (i=0; i<len1+len2-1; i++)
		cout<<char(ch3[i]+48);
	cout<<endl;
}
int main() {
	char ch1[10005],ch2[10005];
	cout<<"please input: ";
	while (cin>>ch1>>ch2) {
		mul(ch1,ch2);
	}
	return 0;
}
