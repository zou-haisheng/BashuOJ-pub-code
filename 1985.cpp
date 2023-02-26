#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	string a;
	int ans, len;
	int main()
	{
		cin>>a;
		len = a.length();
		for(int i=0;i<len;i++)
		{
			int t = a[i]-'0';
			ans = (ans*10+t)%7;
		}
		cout<<ans;
		return 0;
	}
}

int main()
{
	//freopen("a.in", "r", stdin);
	//freopen("a.out", "w", stdout);
	zhs::main();
	return 0;
}
//0.648MB