#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int main()
	{
		int n, r, l, k;
		scanf("%d%d%d", &n, &l, &r);
		if(r-l/n*n >= n) k = l/n*n+n-1;
		else k = r;
		cout<<k%n;
		return 0;
	}
}

int main()
{
	zhs::main();
}