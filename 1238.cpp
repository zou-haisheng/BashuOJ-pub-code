#include<bits/stdc++.h>
using namespace std;

int ack(int m, int n)
{
	if(m==0)
	{
		return n+1;
	}
	else if(m!=0 && n==0)
	{
		return ack(m-1, 1);
	}
	else if(m!=0 && n!=0)
	{
		return ack(m-1, ack(m, n-1));
	}
}

int main()
{
	int m, n;
	cin>>m>>n;
	cout<<ack(m, n);
	return 0;
} 