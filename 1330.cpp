#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	long long n, a[5000001], s, sum[5000001];      
	inline bool check(int x, int y)
	{
	    for(int i=y;i<=n;i++)
	        if(i>=x && sum[i]-sum[i-x]>=s) return true;
	    return false;
	}
	int main()
	{
		cin>>n>>s;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum[i] = sum[i-1]+a[i];
		}
		int l=1, r=n, t=1;
	    while(l<=r)
	    {
			int mid=l+r>>1;
	        if(check(mid, t)==1)
			{
				r = mid-1;
				t = 0;
			}
	        else l = mid+1;
	    }
	    cout<<r+1;
	    return 0;
	}
}

int main()
{
	zhs::main();
}