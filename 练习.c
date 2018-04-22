#include<stdio.h>
#include<math.h>
int main() {
	int T,k;
	scanf("%d",&T);
	while(T--) {
		float L,D,R,n;
		scanf("%f%f%f",&L,&D,&R);
		n=L/sqrt(4*R*R-D*D);
		if(R<=D/2) printf("impossible\n");
		else {
			if(n==(int)n) k=(int)n;
			else k=(int)n+1;
			printf("%d\n",k);
		}
	}
	return 0;
}
