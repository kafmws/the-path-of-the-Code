#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	int x,n,i,j,row,line,t;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);t=x/2+1;
		int map[t][t];
		for(i=0;i<t;i++){
			for(j=0;j<t;j++){
				map[i][j]=' ';
			}
		}
		row=0,line=0;
		while(t--){
			map[row][line]='X';
			map[row][x-1-line]='X';
			row++,line++;
		}
		for(i=0;i<=row;i++){
			for(j=0;j<=line;j++){
				printf("%c",map[i][j]);
			}
			printf("\n");
		}
		for(i=t-1;i>=0;i--){
			for(j=t-1;j>=0;j--){
				printf("%c",map[i][j]);
			}printf("\n");
		} 
		printf("\n");
	}
	return 0;
}
