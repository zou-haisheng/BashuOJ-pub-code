#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	for(int i=1000;i<=9999;i++)
	{
		a = i/100;
		b = i%100;
		if((a+b) * (a+b)==i)
		{
			cout<<i<<' '; 
		}
	}
	return 0;
} 