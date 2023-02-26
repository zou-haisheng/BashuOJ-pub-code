#include<iostream>
using namespace std;
int a, b, n, t;
int main()
{
	cin>>a>>b>>n;
	for(int i=1;i<=n;i++)
	{
		t = min(a, b);
		if(a>=b) a -= b;
		else if(a<b) b -= a;
	}
	cout<<t;
	return 0; 
}