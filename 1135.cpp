#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n, a[201], b[201], s=0;
	int m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	for(int i=1;i<=m;i++)
	{
	    s = s+b[i];
		if(a[i]>=n)break;
	}
	cout<<fixed<<setprecision(1)<<s<<endl;
	return 0;
}