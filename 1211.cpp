#include<iostream>
using namespace std;
int main()
{
	int a,b,n,i,j,s=0,t;
	cin>>a>>b;
	for(i=1;i<=a*b/2;i++)
	{
		t=i;
		if(a*b%i==0)
		{
			j=a*b/i;
			while(i!=0)
			{
				n=j%i;
				j=i;
				i=n;	
			}
			if(j==a)s++;		
		}
			i=t;
	}
	cout<<s;
	return 0;
}