#include<stdio.h>

//int main() {
//	int i,j,n,k=1;
//	scanf("%d",&n);
//	int num[n+1][n+1]= {0};
//	
//	for(i=0;i<n+1;i++){
//		for(j=0;j<n+1;j++){
//			num[i][j]=0;
//		}
//	}i=0,j=n-1;
//	while(k<=n*n) {
//		while(i+1<=n&&!num[i][j]) {//down
//			num[i++][j]=k++;
//		}
//		i--;
//		while(j-1>=-1&&!num[i][j]) { //left
//			num[i][j--]=k++;
//		}
//		j++;
//		while(i-1>=-1&&!num[i][j]) { //up
//			num[i--][j]=k++;
//		}
//		i++;
//		while(j+1<=n&&!num[i][j]) { //right
//			num[i][j++]=k++;
//		}
//		j--;
//	}
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("%d",num[i][j]); 
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <stdio.h>  
main()  
{  
    int n,a[101][101]={0},x,y,c=0;  
    scanf("%d",&n);  
    x=0;y=n-1;  
    c=a[x][y]=1;  
    while (c<n*n)//最大数为n*n  
    {  
        while (x+1<n&&!a[x+1][y])//向下  
            a[++x][y]=++c;  
        while (y-1>=0&&!a[x][y-1])//向左  
            a[x][--y]=++c;  
        while (x-1>=0&&!a[x-1][y])//向上  
            a[--x][y]=++c;  
        while (y+1<n&&!a[x][y+1])//向右  
            a[x][++y]=++c;  
    }     
        for (x=0;x<n;x++)  
    {  
        for (y=0;y<n;y++)  
            printf("%d ",a[x][y]);  
        printf("\n");  
    }  
  
}  

