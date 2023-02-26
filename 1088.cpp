#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[101], maxx=0, pos=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	maxx = max(a[i], maxx);
    	pos = a[i]>=maxx?i:pos;
	}
	cout<<maxx<<' '<<pos;
    return 0;
}