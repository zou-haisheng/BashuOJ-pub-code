#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x, y;
    int a,b[1000],t;
    cin>>x;
    a = floor(x);
    y = x-(double)a;
    int i=0;
    while(a!=0)
    {
        i++;
        b[i] = a%2;
        a = a/2;
    }
    for(;i>=1;i--)
    cout<<b[i];
    cout<<'.';
    i = 0;
    while(y!=0)
    {
    	if(i==20) break;
        t = int(y*2);
        y = y*2-t;
        cout<<t;
        i++;
    }
    return 0;
}