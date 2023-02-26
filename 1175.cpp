#include<cstdio>  
#include<iostream>  
#include<algorithm>  
#include<cstring>  
using namespace std;  
int a[10001],q[101];
int main()
{
	int n,m,num=1,t=0,st=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	while(num<=n)
	{
		for(int i=1;i<=m;i++)
		{
			if(!q[i]){
			 	q[i]=a[num];
				num++;
			}
			q[i]--;
		}
		t++;
	}
	for(int i=1;i<=m;i++) st=max(st,t+q[i]);
	cout<<st;
    return 0;  
}