#include<iostream>
using namespace std;
int main()
{
    int n, i, a[105]={0}, m=0, j, minn=0, s=0;
    cin>>n;
    for(i=0;i<n;i++)
	{
		cin>>a[i];
    }
    for(j=0;j<n-1;j++)
	{
		minn=a[0]+a[1];
		m=0;
		for(i=0;i<n-j-1;i++)
		{
		if(minn>a[i]+a[i+1])
		{
		m=i;
		minn=a[i]+a[i+1];
		}
		}
	    a[m]+=a[m+1];
	    for(int i=m+1;i<n-j-1;i++)
	    a[i]=a[i+1];
	    s+=minn;
    }
    cout<<s;
    return 0;
}