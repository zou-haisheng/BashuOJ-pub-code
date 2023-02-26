#include<iostream>
#include<cstdio>
using namespace std;
int t[200001], g[200001];
int n, a[101], ans;
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
	{
        cin>>a[i];
        g[a[i]] = 1;
    }
    for(int i=1;i<n;i++)
	{
        for(int j=i+1;j<=n;j++)
		{
            t[a[i]+a[j]]++;
        }
    }
    for (int i=1;i<=200002;i++)
	{
        if(t[i]>0 && g[i]!=0) ans++;
    }
    cout<<ans<<endl;
    return 0;
}