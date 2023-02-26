#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	string s;
	char ch;
	int n, len;
	int main()
	{
	    cin>>s>>n>>ch;
	    len = s.length();
	    for(int i=0;i<len;i++)
	    {
	    	if(ch=='L') s[i] += n;
	    	else s[i] -= n;
	    	if(s[i]>'Z') s[i] -= 26;
	    	else if(s[i]<'A') s[i] += 26;
		}
		cout<<s;
	    return 0;
	}
}
int main()
{
	zhs::main();
}