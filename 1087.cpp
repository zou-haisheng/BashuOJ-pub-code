#include<bits/stdc++.h>
using namespace std;
int n;
string a;
bool flag;

int main()
{
	cin>>a;
	n = a.length();
	for(int i=1;i<=n/2;i++)
	{
		if(a[i-1]!=a[n-i])
		{
			flag = true;
			break;
		}
	}
	if(!flag) cout<<"YES";
	else cout<<"NO";
	return 0;
}