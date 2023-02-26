#include<bits/stdc++.h>
using namespace std;
long long f[101]={0, 1, 2, 4}, n;

int main()
{
	for(int i=4;i<=100;i++) 
	{
 		f[i] = f[i-1] + f[i-2] + f[i-3];
	}
	while(cin>>n)
	{
		if(n==0) break;
		cout<<f[n]<<endl;
	}
	return 0;
}