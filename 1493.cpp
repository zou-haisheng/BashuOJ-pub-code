#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	#define x (1<<i)
	#define y (1<<i-1)
	int a, b, f[100001], now, i;
	char ch[5];
	queue<int>q;
	bitset<100005>vst;
	void bfs()
	{
		q.push(a);
		vst[a] = 1;
		f[a] = 0;
		int p;
		while(q.size())
		{
			now = q.front();
			q.pop();
			if(now==b)
			{
				printf("%d", f[now]);
				break;
			}
			for(i=0;i<16;i++)
			{
				if(i%4!=0 && (now&x^(now&y)))
				{
					if(!vst[p=now^x^y])
					{
						vst[p] = 1;
						f[p] = f[now]+1;
						q.push(p);
					}
				}
				if(i<12 && (now&x) ^ (now & (1<<i+4)))
				{
					if(!vst[p = now^x^(1<<i+4)])
					{
						vst[p] = 1;
						f[p] = f[now]+1;
						q.push(p);
					}
				}
			}
		}
	}
	int main()
	{
		for(i=1;i<=4;i++)
		{
			scanf("%s", ch);
			for(int j=0;j<4;j++)
			{
				a = a*2+ch[j]-'0';
			}
		}
		for(i=1;i<=4;i++)
		{
			scanf("%s", ch);
			for(int j=0;j<4;j++)
			{
				b=b*2+ch[j]-'0';
			}
		}
		bfs();
		return 0;
	}
}

int main()
{
 	zhs::main();
}
