#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int main()
	{
		int n, m, k;
		scanf("%d%d%d", &n, &m, &k);
		int st_1=0, en_1=n-1;
		int st_2=0, en_2=m-1;
		for(int i=1;i<=k;i++)
		{
			cout<<st_1+1<<' '<<st_2+1<<'\n';
			st_1 = (st_1+1)%n;
			st_2 = (st_2+1)%m;
		}
	    return 0;
	}
}

int main()
{
	zhs::main();
}