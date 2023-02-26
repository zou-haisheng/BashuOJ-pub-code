#include<iostream>
using namespace std;
int a[10005],b[10005];
int n,ans;
int f(int x)
{
    if(a[x-1]+a[x]+a[x+1]==b[x])return 1; 
    return 0;
}
void dfs(int k)
{ 
    if(k==n+1)
	{
	    if(f(n)) ans++;
		return;
	}  
    a[k] = 1;
	if(k==1||f(k-1))
	{
		dfs(k+1);
	}
    a[k] = 0;
	if(k==1||f(k-1))
	{
		dfs(k+1);
	} 
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
    dfs(1);
    cout<<ans<<endl;
}