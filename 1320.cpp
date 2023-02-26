#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	struct interval
	{
		int start;
		int end;
	} a[50001];
	bool cmp(interval x, interval y)
	{
		return x.start<y.start;
	}
	int main()
	{
		int n;
		interval interv;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i].start>>a[i].end;
		sort(a+1, a+n+1, cmp);
		for(int i=1;i<=n-1;i++)
		{
			if(a[i].end>=a[i+1].start&&a[i+1].end>=a[i].start)
			{		
				a[i+1].start = min(a[i].start, a[i+1].start);			
				a[i+1].end = max(a[i].end, a[i+1].end);		
			}
			else
			{
				cout<<"no";
				return 0;
			}
		}
		cout<<a[n].start<<' '<<a[n].end;
		return 0;
	}
}
int main()
{
	zhs::main();
}