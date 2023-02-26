#include<bits/stdc++.h>
using namespace std;
int a[1000000];
double s;

int main()
{
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	  cin>>a[i];
	  s += (a[i]*2)*25;
	  s += abs(a[i]-a[i-1])*25;
	  if(a[i]!=0)s=s+50;
	}
	s += a[n]*25;
	s /= 10000;
	cout<<fixed<<setprecision(4)<<s<<endl;
	return 0; 
}