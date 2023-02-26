#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[101];  
    int ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    cin>>m;
    for(int i=1;i<=n;i++)
    	if(a[i]==m)
    		ans++;
    cout<<ans;
    return 0;
}