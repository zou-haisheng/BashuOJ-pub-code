//一个简单的办法[doge]
#include<bits/stdc++.h>
//#include<time.h>
using namespace std;
namespace zhs{
	int n, a[100001];
	int main()
	{
	    scanf("%d", &n);
	    for(int i=1;i<=n;i++)
	    {
	    	scanf("%d", &a[i]);
		}
		sort(a+1, a+n+1);
		printf("%d %d", a[n], a[1]);
	    return 0;
	}
}
int main()
{
	zhs::main();
}