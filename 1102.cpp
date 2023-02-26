#include<bits/stdc++.h>
using namespace std;
int n, maxn, minn=100;
string a;
int b[27];

bool f(int k)
{
	if(k==1 || k==0) return false;
	if(k==2) return true;
	for(int i=2;i*i<=n;i++)
	{
		if(!n%i) return false;
	}
	return true;
}

int main()
{
	cin>>a;
	n = a.length();
	for(int i=0;i<n;i++)
	{
		b[a[i]-'a'+1]++;
	}
	for(int i=1;i<=26;i++)
	{
		maxn = max(maxn, b[i]);
		minn = b[i]?min(minn, b[i]):minn;
	}
	if(f(maxn-minn))
	{
		cout<<"Lucky Word"<<endl;
		cout<<maxn-minn;
	}
	else
	{
		cout<<"No Answer"<<endl;
		cout<<0;
	}
	return 0;
}