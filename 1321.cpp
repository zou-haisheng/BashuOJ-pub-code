#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int n;
	long long a[100005];
	long long b[100005];
	long long sum;
	void merge(int l,int r)
	{
		int mid=(l+r)/2;
		if(l==r) return;
		merge(l, mid);
		merge(mid+1, r);
		int i=l, j=mid+1, p=l;
		while(i<=mid&&j<=r)
		{
			if(a[i]>a[j])
			{
				int k=mid-i+1;
				b[p++] = a[j++];
				sum += k;
			}
			else b[p++] = a[i++];
		}
		while(i<=mid) b[p++]=a[i++];
		while(j<=r) b[p++]=a[j++];
		for(i=l;i<=r;i++) a[i]=b[i];
	}
	int main()
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		merge(1, n);
		cout<<sum<<endl;
		return 0;
	}
}
int main()
{
	zhs::main();
}