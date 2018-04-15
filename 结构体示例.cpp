#include<stdio.h>
#include<math.h>

struct info {
	char str[22];
	int mark[2];
	char id[2];
	int num;//num 论文数量
	int money;
};

int main() {
	struct info data[100],t;
	int time,n=100,i,j,max,flag=1;
	long long sum;
	scanf("%d",&time);
	while(time--) {
		for(i=0; i<100; i++) {
			data[i].money=0;
		}
		j=0,sum=0,flag=1;
		scanf("%d",&n);
		for(i=0; i<n; i++) {
			scanf("%s %d %d %c %c %d",&data[j].str,&data[j].mark[0],&data[j].mark[1],&data[j].id[0],&data[j].id[1],&data[j].num);
			j++;
		}
		for(i=0; i<n; i++) { //计算奖学金
			if(data[i].mark[0]>80&&data[i].num>=1) { //院士奖学金
				data[i].money+=8000;
			}
			if(data[i].mark[0]>85&&data[i].mark[1]>80) { //五四奖学金
				data[i].money+=4000;
			}
			if(data[i].mark[0]>90) { //成绩优秀奖
				data[i].money+=2000;
			}
			if(data[i].id[1]=='Y'&&data[i].mark[0]>85) { //西部奖学金
				data[i].money+=1000;
			}
			if(data[i].id[0]=='Y'&&data[i].mark[1]>80) { //班级贡献奖
				data[i].money+=850;
			}
		}
		for(i=1; i<n; i++) {
			for(j=0; j<n-i; j++) {
				if(data[j].money>data[j+1].money) {
					t=data[j],data[j]=data[j+1],data[j+1]=t;
				}
			}
		}
		for(max=data[n-1].money,i=0; i<n; i++) {
			sum+=data[i].money;
			if(data[i].money==max) {
				if(flag) {
					printf("%s\n",data[i].str);
					flag=0;
				}
			}
		}
		printf("%d\n%lld\n",max,sum);
	}
	return 0;
}
