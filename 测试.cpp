#include <stdio.h>
#include<math.h>
int main(){
	int num;
	char c;
	long long a,b;
	scanf("%d",&num);
	while(num--){
		scanf("%x%c%x",&a,&c,&b);
		if(c=='+'){
			printf("%o\n",a+b);
		}else{
			printf("%o\n",a-b);
		}
	}
	return 0; 
}
