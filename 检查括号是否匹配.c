#include<stdio.h>
#include<string.h>//([([]())(()[])])
int main() {
	int t,j,n,time,flag=1;
	char exam[5][10000];
	scanf("%d", &time);
	for (t = 0; t < time; t++) {
		scanf("%s", &exam[t]);
	}
	for (t = 0; t < time; t++) {
		n = strlen(exam[t]);
		if(n%2==0) {
			for(j=0; j<n/2; j++) {
				if(exam[t][j]=='(') {
					if(exam[t][n-j-1]==')'||exam[t][j+1]==')') {
						if(exam[t][j+1]==')'){j++;
						}
					} else {
						t+1==time?printf("No"):printf("No\n");
						flag=0;
						break;
					}
				} else if(exam[t][j]=='[') {

					if(exam[t][n-j-1]==']'||exam[t][j+1]==']') {
						if(exam[t][j+1]==']'){
							j++;
						}
					} else {
						t+1==time?printf("No"):printf("No\n");
						flag=0;
						break;
					}
				} else {
					t+1==time?printf("No"):printf("No\n");
					flag=0;
					break;
				}
			}
			if(flag) {
				t+1==time?printf("Yes"):printf("Yes\n");
			}
		} else {
			t+1==time?printf("No"):printf("No\n");
		}
	}
}
