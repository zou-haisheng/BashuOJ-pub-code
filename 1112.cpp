#include<bits/stdc++.h>
using namespace std;
int m, n, t, s;
int main()
{
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		t = 0;
		int k=i;
		while(k!=0)
		{
			for(int j=2;j<=sqrt(k);j++)
			{
				if(k%j==0) t=1;
			}
			k /= 10;
		}
		if(t==0) s++;
	}
	cout<<s;
	return 0;
}