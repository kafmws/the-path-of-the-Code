#include<stdio.h>
#include<string.h
void sort(char str[],int x);
int main(){
	char str[500][10];
	int i,n,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++){
		sort(str[i],strlen(str[i]));
	}
    return 0;
}
//��c�֧�֧֧᧲
void sort(char str[],int x){
	int i,j,t;
	for(i=1;i<x;i++){
		for(j=0;j<x-i;j++){//��U�Ԩc�l���f��
			if(str[j]>str[j+1]){
				t=str[j+1];
				str[j+1]=str[j];
				str[j]=t;
			}
		}
	}printf("%s",str);
//	for(i=0;i<x;i++){
//
//	}
}
