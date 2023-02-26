#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1, a2, n, ans;
    cin>>a1>>a2>>n;
	ans = a1 - (a2 -a1) + (a2-a1)*n;
	cout<<ans;
	return 0;
}