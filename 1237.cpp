#include<bits/stdc++.h>
using namespace std;

void f()
{
	char c;
	cin>>c;
	if(c=='!')
	{
		cout<<c;
		return;
	}
	f();
	cout<<c;
}

int main()
{
	f();
	return 0;
} 