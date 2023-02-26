#include<bits/stdc++.h>
using namespace std;
int d[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	int n;
	cin>>n;
	if(n>=130) cout<<80;
	else if(n>=120) cout<<70;
	else if(n>=110) cout<<50;
	else if(n>=100) cout<<30;
	else cout<<10;
	return 0;
}
