#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a, sum=8;
	char b;
	cin>>a>>b;
	sum += ceil((a-1000)/500)*4;
	if(b == 'y')
	{
		sum += 5;
	}
	cout<<(int)sum;
	return 0;
} 