#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//�۲�����ص㣬����ֹ���� 



//  1  2  3  4  5
// 16 17 18 19  6
// 15 24 25 20  7
// 14 23 22 21  8
// 13 12 11 10  9
int main() {
	int n,i=0,j=-1,cnt=1;
	scanf("%d",&n);
	int num[n][n];
	int t=n;
	while(j<n-1) {
		num[i][++j]=cnt++;
	}//j=n-1
//	for(j=0;j<n;j++){printf("%d ",num[0][j]);
//	}
	while(cnt<=t*t) {
		while(i!=n-1) {//�� 
			num[++i][j]=cnt++;
		}//i=n-1
		while(j!=t-n){//�� 
			num[i][--j]=cnt++;
		}//j=0
		n--;
		while(i!=t-n){
			num[--i][j]=cnt++;
		}//i=1;
		while(j!=n-1){
			num[i][++j]=cnt++;
		}
	}
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			printf("%3d",num[i][j]);
		}printf("\n");
	}
	return 0;
}

//17 16 15 14 13
//18  5  4  3 12
//19  6  1  2 11
//20  7  8  9 10
//21 22 23 24 25

//int main() {
//	int n,cnt=1,x=1;//x ÿ��Ȧ���������ֵĸ��� 
//	scanf("%d",&n);
//	int num[n][n];
//	int i=n/2,j=n/2;
//	num[i][j]=cnt;
//	while(1) {
//		int t=x;
//		while(t--) { //��
//			num[i][++j]=++cnt;
//		}
//		if(x==n) {
//			break;
//		}
//		t=x;
//		while(t--) { //��
//			num[--i][j]=++cnt;
//		}
//		x++,t=x;
//		while(t--) { //��
//			num[i][--j]=++cnt;
//		}
//		t=x;
//		while(t--) { //��
//			num[++i][j]=++cnt;
//		}
//		t=x,x++;
//	}
//	for(i=0; i<n; i++) {
//		for(j=0; j<n; j++) {
//			printf("%2d ",num[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



