#include<bits/stdc++.h>
using namespace std;
int n, sum;
bool b[5001];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j%i==0)
			{
				b[j] = !b[j];
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]) sum++;
	}
	cout<<sum;
	return 0;
}