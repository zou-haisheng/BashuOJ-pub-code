#include<bits/stdc++.h>
using namespace std;
long long h[101][101][101];
int w(int a, int b, int c)
{
	if(h[a][b][c]!=-1)
	{
		return h[a][b][c];
	}
	else if(a<=0 || b<=0 || c<=0)
	{
		return 1;
	}
	else if(a>20 || b>20 || c>20)
	{
		return h[a][b][c] = w(20, 20, 20);
	}
	else if(a<b && b<c)
	{
		return h[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
	}
	return h[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c)+w(a-1, b, c-1) - w(a-1, b-1, c-1);
}

int main()
{
	int a, b, c;
	memset(h, -1, sizeof(h));
    cin>>a>>b>>c;
	cout<<w(a, b, c);
	return 0;
}