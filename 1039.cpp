#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c;
	int sum=0;
	while(cin>>c)
	{
		if(c=='#') break;
		if(c=='a' || c=='A')
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
} 