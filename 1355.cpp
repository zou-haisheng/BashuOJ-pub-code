#include<bits/stdc++.h>
using namespace std;
int n;
int a[100001];
int q[100001];

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	int len=0;
	q[0] = -2e9;
	for(int i=0;i<n;i++)
	{
		int l=0, r=len;
		while(l<r)
		{
			int mid=l+r+1>>1;
			if(q[mid]<a[i]) l = mid;
			else r = mid-1;
		}
		len = max(len, r+1);
		q[r+1] = a[i];
	}
	printf("%d\n", len);
	return 0;
}