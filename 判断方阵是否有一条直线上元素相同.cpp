//本思路可解决任意阶方阵，高阶方阵或许可分块;
#include<stdio.h>//1:○，，0：X 
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k,m,map[n][n],exam,flag=1;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&map[i][j]);
		}
	}
	for(i=0; i<n; i++) {
		flag=0;
		exam=map[i][i];
		for(j<n-1?j=i+1:j=0; j<n; j++) { //判断横行
			if(exam!=map[i][j]) {
				flag=1;
				break;
			}
		}
		if(flag==0) {
			break;//若横行相同exit
		}
		flag=0;
		for(k<n-1?k=i+1:k=0; k<n; k++) { //判断竖行
			if(exam!=map[k][i]) {
				flag=1;
				break;
			}
		}
		if(flag==0) {
			break;//竖行相同exit
		}
	}
	if(flag) { //横竖均无相同  判断斜行1
		flag=0;
		exam=map[0][0];
		for(m=0; m<n; m++) {
			if(exam!=map[m][m]) {
				flag=1;
				break;
			}
		}
	}
	if(flag) { //判断斜行2
		flag=0;
		exam=map[n-1][0];
		for(m=0; m<n; m++) {
			if(exam!=map[m][n-1-m]) {
				flag=1;
				break;
			}
		}
	}
	if(!flag) {
		if(exam==1) {
			printf("'○' win ！");
		} else if(exam==0) {
			printf("'×' win ！");
		} else {
			printf("error!");
		}
	} else {
		printf("tie");
	}
	return 0;
}


