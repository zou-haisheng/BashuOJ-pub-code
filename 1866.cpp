#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int sum, lena, lenb;
	string a, b;
	int main()
	{
		cin>>a>>b;
		lena = a.length();
		lenb = b.length();
		for(int i=0;i<lena;i++)
		{
			for(int j=0;j<lenb;j++)
			{
				sum += (a[i]-48)*(b[j]-48);
			}
		}
		cout<<sum;
		return 0;
	}
}

int main()
{
	zhs::main();
}