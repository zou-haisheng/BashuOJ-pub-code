#include<bits/stdc++.h>
using namespace std;
int n, m, t;
char a[10001], b[17]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};
int main()
{
	cin>>n>>m;
	int i=0;
	t = n;
	while(t)
	{
		a[i] = b[t%m];
		t /= m;
		i++;
	}
	i--;
	cout<<'('<<n<<")10=(";
	for(;i>=0;i--)
	{
		cout<<a[i];
	}
	cout<<')'<<m;
	return 0;
}