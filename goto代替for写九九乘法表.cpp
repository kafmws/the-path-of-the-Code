#include <stdio.h>
int main() {
	int i=1,j;
one:
	if(i<10) {
		j=1;
two:
		if(j<=i) {
			printf("%d*%d=%-2d ",j,i,i*j);
			j++;
			goto two;
		}
		printf("\n");
		i++;
		goto one;
	}
	return 0;
}
