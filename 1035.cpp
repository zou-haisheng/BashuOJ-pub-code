#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	float sum, t;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		sum += t;
	}
	printf("%.2f", sum/n);
	return 0;
}