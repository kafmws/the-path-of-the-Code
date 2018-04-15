#include<stdio.h>//           I、V、 X、 L、 C、  D、  M，
#include<stdlib.h> //分别表示 1、5、10、50、100、500、1000
#include<string.h>

int main(){
	char num[15],dict[10]={'I','V','X','L','C','D','M'},real[10]={1,5,10,50,100,500,1000}; 
	char sign[15]={0};
	int i,j,n,sum=0;
	scanf("%s"num);
	n=strlen(num);
	for(i=0;i<n;i++){
		for(j=0;j<7;j++){
			if(num[i]=dict[j]){
				num[i]=j;
			}
		}
	}
	printf("%d",num[0]);
	return 0;
}
