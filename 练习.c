#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int b[7],b1,c1,b2,c2,i,j,d;
		scanf("%d %d",&b1,&c1);
		b2=b1;
		c2=c1;
		for(i=b2; i<=c2; i++) {
			d=i;
			for(j=0; j<6; j++) {
				b[j]=d%10;
				d/=10;
				if(b[j]>6) {
					d=1;
					break;
				}
			}
			if(d==1)
				continue;
			d=0;
			for(j=0; j<4; j++) {
				if(b[j]==b[j+1]&&b[j+1]==b[j+2]) {
					d=1;
					break;
				}
			}
			if(d==1)
				continue;
			for(j=0; j<5; j++) {
				if(abs(b[j]-b[j+1])>4) {
					d=1;
					break;
				}
			}
			if(d==1)
				continue;
			printf("%06d\n",i);
		}
	}
	return 0;
}
