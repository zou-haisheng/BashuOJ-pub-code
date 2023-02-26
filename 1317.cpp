#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	long long ans, a[100001], b[100001],n;
	void merge(int l, int mid, int r)
	{
		int i=l, j=mid+1, k=l;
		while(i<=mid&&j<=r)
		{
			if(a[i]>a[j])
			{
				ans += j-k;
				b[k++] = a[j++];
			}
			else b[k++] = a[i++];
		}
		while(i<=mid) b[k++] = a[i++];
		while(j<=r) b[k++] = a[j++];
		for(i=l;i<=r;i++) a[i] = b[i];
	}
	void mergesort(int l, int r)
	{
		if(l>r) return;
		int mid=(l+r)/2;
		if(l<r)
		{
			mergesort(l, mid);
			mergesort(mid+1, r);
			merge(l, mid, r);
		}
		return;
	}
	int main()
	{
		scanf("%lld", &n);
		for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
		mergesort(1, n);
		printf("%lld", ans);
		return 0;
	}
}
int main()
{
	zhs::main();
}