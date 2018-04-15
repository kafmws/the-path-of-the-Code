#include <iostream>

using namespace std;

int box[500],n,m;

void init()
{
	int i;
	for(i = 1; i <= n; i++)
	{
		box[i] = i;
	}
	return;
 } 
 
 int getf(int v)
 {
 	if(box[v] == v)
	{
		return v;
	}
	else{
		box[v] = getf(box[v]);
		return box[v];
	}
 }
 
 void merge(int v,int u)
 {
 	int t1, t2;
 	t1 = getf(v);
 	t2 = getf(u);
 	if (t1 != t2)
 	{
 		box[t2] = t1;
	 }
 }
 
 int main()
 {
 	int x, y, i, sum=0, j;
 	cin >> n >> m; 
 	init();
 	for(i = 1; i <= m; i++)
 	{
 		cin >> x >> y;
 		merge(x, y);
 		for(j = 1; j <= n; j++)
 		{
 			cout << box[j] << " ";
		 }
		 cout<<endl;
 	
	 }
	 for(i = 1; i <= n; i++)
	 {
	 	cout << box[i] << " ";
	 	if(box[i] == i)
	 	{
	 		sum++;
		 }
	 }
	 cout << endl << sum << endl;
	 return 0;
 }
