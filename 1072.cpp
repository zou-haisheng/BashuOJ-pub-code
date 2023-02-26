#include<iostream>
using namespace std;
int n, a[15][15], b[15][15];
int main() 
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[j][i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}