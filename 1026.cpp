#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a, b;
	cin>>a>>b;
	if(a=='S' && b=='P' || a=='P' && b=='R' || a=='R' && b=='S')
	{
		cout<<"Win";
	}
	else if(a==b)
	{
		cout<<"Equ";
	}
	else cout<<"Fail";
	return 0;
} 