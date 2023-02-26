#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, d;
    cin>>n;
    a = n/1000;
    b = n%1000/100;
    c = n%100/10;
    d = n%10;
    cout<<d*1000+c*100+b*10+a;
	return 0;
}