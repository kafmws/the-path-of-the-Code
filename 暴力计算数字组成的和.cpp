#include <stdio.h>

int main() {
	int i=1,j=1,k=1,money;
	scanf("%d",&money);
	for(; i<=(money*2); i++) {
		j=1;
		for(; j<=((money*10-5)/2); j++) {
			k=1;
			for(; k<=(money*10-7); k++) {
				if(i*5+j*2+k==money*10) {
					printf("%d元可以由%d个五角，%d个二角和%d个一角组成。\n",money,i,j,k);
					//break;(只输出一次) || /*goto out;	*/			
				}
			}//break;
		}//break;
	}
	/*out:*/
	return 0;
}
