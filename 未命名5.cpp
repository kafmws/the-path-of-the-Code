#include<stdio.h>//

int main() {
	int n;
	scanf("%d",&n);
	char *str[12]= {"January","Feburary","March","April","May","June","July",
	                "Augest","September","October","Noveber","December"
	               };
	printf("%s",*str[n-1]);
	return 0;
}
