#include<iostream>
using namespace std;
int a[10001], f[10001][101];

int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
    f[1][a[1]%k] = 1;
	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<k;j++)
		{
			f[i][j] = f[i-1][(a[i]%k+j)%k]||f[i-1][(j+k-a[i]%k)%k];
		}
	}
	if(f[n][0]) cout<<"YES";
	else cout<<"NO";
	return 0;
}