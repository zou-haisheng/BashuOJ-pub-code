#include<bits/stdc++.h>
using namespace std;
char c;
int a[150];
int main()
{
	while(c!='.')
	{
		cin>>c;
		if(c>='a' && c<='z') a[c]++;
	}
	for(int i='a';i<='z';i++)
	{
		if(a[i])
		{
			cout<<char(i)<<':'<<a[i]<<endl;
		}
	}
	return 0;
}