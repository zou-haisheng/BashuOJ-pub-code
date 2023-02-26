#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int t=i, sum=0;
		while(t)
		{
			sum += (t%10)*(t%10)*(t%10);
			t /= 10;
		}
		if(sum==i) cout<<i<<endl;
	}
	return 0;
}