#include<bits/stdc++.h>
using namespace std;
int d[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	int a, b;
	cin>>a>>b;
	if(b==2 && (a%400==0 || a%4==0 && a%100!=0 )) cout<<29;
	else cout<<d[b];
	return 0;
}
