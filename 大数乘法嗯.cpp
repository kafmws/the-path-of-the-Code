#include<stdio.h>
int main() {
	int i,j,n,m;
	scanf("%d %d",&n,&m);
	int x[n],y[m];
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}for(j=0;j<m;j++){
		scanf("%d",&x[j]);
	}
	int t=0,tem[n][m+1],result[22]= {0}; //t进位
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			tem[i][j]=(x[i]*y[j])%10+t;
			t=(x[i]*y[j]+t)/10;
		}
	} //可能进位，要多遍历一列；t=(tem[i][j]+result[i]+t)/10;(tem[i][j]+result[i])%10+t;
	t=0;
	for(j=0; j<m+1; j++) {
		for(i=0; i<n; i++) {
			result[i]+=tem[i][j];
		}
		result[i]+=t;
		t=result[i]/10;
		result[i]%=10;
	}
	for(i=21; i>=0; i--) { //逆序输出
		if(result[i]!=0) {
			printf("%d",result[i]);
		}
	}
	return 0;
}
