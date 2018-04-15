#include<stdio.h>//abcabbcabde
#include<string.h>
int main(){
	int i,j,k,l,flag=1,max=0;
	char str[1000];
	scanf("%s",str);
	int n=strlen(str);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			flag=1;
			for(k=i;k<=j;k++){
				for(l=k+1;k<j;l++){
					if(str[l]==str[l+1]){
						flag=0;
						break;
					} 
				}
				if(flag==0){
					break;
				}
			}if(flag&&j-i+1>max){
				max=j-i+1;
			}
		}
	}
	printf("%d",max);
	return 0;
}
