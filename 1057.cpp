#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char a[27]={' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n-i;j++)
    	{
    		cout<<' ';
		}
		int j=1;
		for(;j<=i;j++)
		{
			cout<<a[j];
		}
		j -= 2;
		for(;j>=1;j--)
		{
			cout<<a[j];
		}
		cout<<endl;
	}
	return 0;
}