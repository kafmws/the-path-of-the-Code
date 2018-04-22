#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int search(char *str,char c){
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i]==c){
			return i;
		}
	}
	return -1;
}
int main() {
	int t,sum,cnt=1,v,x,i;
	int dir[300]={0};
	dir['V']=5,dir['X']=10,dir['I']=1;
	char str[8];
	while(scanf("%s",str)!=EOF){
            sum=0;
            v=search(str,'V'),x=search(str,'X');
            if(x!=-1){//there is X
                for(i=0;i<x;i++){//-
                    sum-=dir[str[i]];
                }for(i;i<strlen(str);i++){
                    sum+=dir[str[i]];
                }
            }else if(v!=-1){
                for(i=0;i<v;i++){
                    sum-=dir[str[i]];
                }for(i;i<strlen(str);i++){
                    sum+=dir[str[i]];
                }}
            else{
                    for(i=0;i<strlen(str);i++){
                        sum+=dir[str[i]];
                    }
                }printf("Case %d: %d\n",cnt++,sum);
            }
	return 0;
}

