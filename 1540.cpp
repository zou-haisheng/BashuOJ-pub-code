#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	struct node{
		int nxt;
		int pre;
		int val;
	}a[100001];
	void add(int x, int y)
	{
		a[a[x].nxt].pre = y;
		a[y].nxt = a[x].nxt;
		a[x].nxt = y;
		a[y].pre = x;
	}
	void del(int y)
	{
		a[a[y].pre].nxt = a[y].nxt;
		a[a[y].nxt].pre = a[y].pre;
	}
	int main()
	{
		int n, m;
		scanf("%d%d", &n, &m);
		a[n+1].nxt = 1;
		a[n+2].pre = n;
		a[1].pre = n+1;
		a[1].nxt = 2;
		for(int i=2;i<=n-1;i++)
		{
			a[i].pre = i-1;
			a[i].nxt = i+1;
		}
		a[n].pre = n-1;
		a[n].nxt = n+2;
		for(int i=1;i<=m;i++)
		{
			char ch;
			int s, t;
			cin>>ch>>s>>t;
			if(ch=='A')
			{
				del(s);
				add(a[t].pre, s);
			}
			if(ch=='B')
			{
				del(s);
				add(t, s);
			}
		}
		for(int i=a[n+1].nxt;i!=n+2;i=a[i].nxt) cout<<i<<'\n';
		return 0;
	} 
}

int main()
{
	zhs::main();
	return 0;
}
