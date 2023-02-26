#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int n, k, a[100001], que[1000001], new_que[1000001];
	int main()
	{
		scanf("%d%d", &n, &k);
		for(int i=1;i<=n;i++) scanf("%d", &a[i]);
		int st=1, en=0;
		for(int i=1;i<=n;i++) que[++en] = a[i];
		int new_st=1, new_en=0;
		for(int i=1;i<=k;i++)
		{
			if(st>en)
			{
				new_que[++new_en] = 2*new_que[new_st++];
				continue;
			}
			if(new_st>new_en)
			{
				new_que[++new_en] = 2*que[st++];
				continue;
			}
			if(que[st]<new_que[new_st]) new_que[++new_en] = 2*que[st++];
			else new_que[++new_en] = 2*new_que[new_st++];
		}
		while(st<=en && new_st<=new_en)
		{
			if(que[st]<new_que[new_st]) cout<<que[st++]<<' ';
			else cout<<new_que[new_st++]<<' ';
		}
		for(int i=st;i<=en;i++) cout<<que[i]<<' ';
		for(int i=new_st;i<=new_en;i++) cout<<new_que[i]<<' ';
		return 0;
	}
}

int main()
{
	zhs::main();
}