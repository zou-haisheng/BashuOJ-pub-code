#include<bits/stdc++.h>
using namespace std;
int n,k;
long long s(int n,int k)
{
    if(k==0||n<k) return 0;
    if(k==n||k==1) return 1;
    return s(n-1,k-1)+k*s(n-1,k);
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<s(n,k);
}