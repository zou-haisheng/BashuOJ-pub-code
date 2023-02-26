#include<bits/stdc++.h>
using namespace std;

int w(int a, int b, int c)
{
	int n;
	if(a<=0 || b<=0 || c<=0)
	{
		cout<<"w("<<a<<','<<b<<','<<c<<")="<<1<<endl;
		return 1;
	}
	else if(a>5 || b>5 || c>5)
	{
		n = w(5, 5, 5);
		cout<<"w("<<a<<','<<b<<','<<c<<")="<<n<<endl;
		return n;
	}
	else if(a<b && b<c)
	{
		n = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
		cout<<"w("<<a<<','<<b<<','<<c<<")="<<n<<endl;
		return n;
	}
	n = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
	cout<<"w("<<a<<','<<b<<','<<c<<")="<<n<<endl;
	return n;
}

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	w(a, b, c);
	return 0;
} 