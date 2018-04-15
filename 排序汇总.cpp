#include<stdio.h>
#include<string.h>
/*√∞≈›≈≈–Ú 
int main() {
	int n,i,j,t;
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(num[j]>num[j+1]){
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	return 0;
}*/
/*πÈ≤¢≈≈–ÚÀºœÎ 
int main() {
	int a,b,i=0,j=0,k=0;
	scanf("%d %d",&a,&b);
	int num1[a],num2[b],num[a+b];
	for(i=0;i<a;i++){
		scanf("%d",&num1[i]);
	}
	for(i=0;i<b;i++){
		scanf("%d",&num2[i]);
	}
	i=0;
	while(i<a&&j<b){
		if(num1[i]<num2[j]){
			num[k++]=num1[i++];
		}else{
			num[k++]=num2[j++];
		}
	}
	while(i<a){
		num[k++]=num1[i++];
	}
	while(j<b){
		num[k++]=num2[j++];
	}
	for(i=0;i<a+b;i++){
		printf("%d ",num[i]);
	}
	return 0;
}*/
 
int main(){
	
	return 0;
} 
