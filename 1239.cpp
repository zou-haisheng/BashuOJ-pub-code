#include<bits/stdc++.h>
using namespace std;

int w(int a, int b, int c)
{
	if(a<=0 || b<=0 || c<=0)
	{
		return 1;
	}
	else if(a>5 || b>5 || c>5)
	{
		return w(5, 5, 5);
	}
	else if(a<b && b<c)
	{
		return w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
	}
	return w(a-1, b, c) + w(a-1, b-1, c)+w(a-1, b, c-1) - w(a-1, b-1, c-1);
}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    cout<<w(a, b, c);
	return 0;
}