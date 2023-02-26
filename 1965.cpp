#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int ans, n;
	string str;
	int main()
	{
		cin>>str;
		n = str.length();
		for(int i=0;i<n;i++)
		{
			if(str[i]>'Z') str[i] -= 'z'-'Z';
		}
		for(int i=0;i<=n-4;i++)
		{
			string s;
			if(str[i]=='N' && str[i+1]=='H' && str[i+2]=='O' && str[i+3]=='I') ans++;
		}
		cout<<ans;
		return 0;
	}
}
int main()
{
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	zhs::main();
	return 0;
}
//648kb