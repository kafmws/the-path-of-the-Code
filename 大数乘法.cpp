#include<stdio.h>
#include<stdlib.h>
void sort(int *str,int x);

int main() {
	int n,m,x[12],y[12];
	scanf("%d %d",&n,&m);
	int i,j,num[n],ber[m];
	for(i=0; i<n;i++) {
		scanf("%d",&num[i]);
	}
	for(j=0; j<m; j++) {
		scanf("%d",&ber[j]);
	}
	sort(num,n);
	sort(ber,m);
	i=0,j=0;
	while(num[n-2]!=0){//此时数字逆序 
		x[i++]=num[n-2]%10;
		num[n-2]/=10;
	}
	while(ber[m-1]!=0){//此时数字逆序 
		y[j++]=ber[m-1]%10;
		ber[m-1]/=10;
	}
	n=sizeof(x)/sizeof(int),m=sizeof(y)/sizeof(int);
	//数组内乘法,x[n],y[m]
	int t=0,tem[n][m+1],result[22]={0};//t进位 
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			tem[i][j]=(x[i]*y[j])%10+t;
			t=(x[i]*y[j]+t)/10;
		} 	
	} //可能进位，要多遍历一列；t=(tem[i][j]+result[i]+t)/10;(tem[i][j]+result[i])%10+t;
	t=0;
	for(j=0;j<m+1;j++){
		for(i=0;i<n;i++){
			result[i]+=tem[i][j];
		}result[i]+=t;
		t=result[i]/10;
		result[i]%=10;
	} for(i=21;i>=0;i--){//逆序输出 
		if(result[i]!=0){
			printf("%d",result[i]);
		}
	}
	return 0;
}
void sort(int *str,int x) {
	int i,j,t;
	for(i=1; i<x; i++) {
		for(j=0; j<x-i; j++) { //前小后大
			if(str[j]>str[j+1]) {
				t=str[j+1];
				str[j+1]=str[j];
				str[j]=t;
			}
		}
	}
}
