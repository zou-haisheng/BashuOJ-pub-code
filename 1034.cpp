#include<bits/stdc++.h>
using namespace std;\
int main() {
	long long ans=1, n;
	cin>>n;
	for(int i=1;i<=n;i++)
		ans *= i;
	cout<<ans;
}