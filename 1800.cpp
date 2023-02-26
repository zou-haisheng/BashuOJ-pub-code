#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int ans;
	string a;
	int main()
	{
	    cin>>a;
	    for(int i=0;i<8;i++)
	    {
	    	if(a[i]=='1') ans++;
	    }
	    cout<<ans;
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}