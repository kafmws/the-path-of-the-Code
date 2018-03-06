//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main() {
//	int i,j,num,y,count=1,n[6];
//	char copy[6];
//	srand(time(NULL));
//	for(i=0; i<5; i++) {
//		y=1+rand()%9;
//		n[i]=y;
//		for(j=0; j<i; j++) {
//			if(n[j]==y) {
//				i--;
//			}
//		}
//	}
//	for(i=0;i<5;i++){
//		copy[i]=n[i]+'0';
//	}
//	copy[5]='\0';
//    int x;
//    x=atoi(copy);
//	printf("Please input the number you guess:\n");
//	scanf("%d",&num);
//	while(num!=x) {
//		if(num>x) {
//			printf("Sorry,you're higher,again:\n");
//		} else {
//			printf("Sorry,you're lower,again:\n");
//		}
//		count++;
//		scanf("%d",&num);
//	}
//	printf("Congratulations!,you're right!\n");
//	if(count==1) {
//		printf("The number is %d .You've tried %d time.",num,count);
//	} else {
//		printf("The number is %d .You' tried %d times.",num,count);
//	}
//	return 0;
//}
