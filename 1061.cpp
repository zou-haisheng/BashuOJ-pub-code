#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	int i=1, j=0, k=1, p=1;
	p = k*(m-1);
	while(i<=n)
	{
		if(p%(m-1)!=0)
		{
			i=1;
			k++;
			p = k*(m-1);
		}
		else
		{
			p = p/(m-1)*m+1;
			i++;
		}
	}
	cout<<k*(m-1)<<endl<<p;
	return 0;
}