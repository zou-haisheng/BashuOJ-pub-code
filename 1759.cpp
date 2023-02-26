#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ans=0, len;
	string s;
	getline(cin, s);
	len = s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]!=' ') ans++;
	}
	cout<<ans;
	return 0;
}