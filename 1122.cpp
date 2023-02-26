#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int que[201];
	int main()
	{
		int st=1, en=0;
		char ch;
		int t;
		while(cin>>ch)
		{
			if(ch=='O')
			{
				if(st<=en) cout<<que[st++]<<'\n';
				else if(st>en) cout<<"None"<<'\n';
			}
			else if(ch=='I') scanf("%d", &que[++en]);
		}
	    return 0;
	}
}

int main()
{
	zhs::main();
}