#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int num,x,count=0;
	srand(time(NULL));
	x=rand()%100+1;
	printf("Please input the number you guess:\n");
	scanf("%d",&num);
	while(num!=x){
		if(num>x){
			printf("Sorry,you're higher,again:\n");
		}
		else{
			printf("Sorry,you're lower,again:\n");
		}
		count++;
		scanf("%d",&num);
	}
	printf("Congratulations!,you're right!\n");
	if(count==1){
		printf("The number is %d .You try %d time.",num,count);
	}
	else{
		printf("The number is %d .You try %d times.",num,count);
	}
	return 0;
}
