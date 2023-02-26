#include<iostream>
#include<cstring>
#include<iomanip>
#include<cstdio> 
using namespace std;
int a[100];
bool check10(int x)
{
	int l=1,r=0;
	while(x){
		a[++r]=x%10; x/=10;
	}
	while(l<=r&&a[l]==a[r]) {
		l++;r--;
	}
	if(l>r) return false;
	else return true;
}
 
bool check2(int x)
{
	int l=1,r=0;
	while(x){
		a[++r]=x%2; x/=2;
	}
	while(l<=r&&a[l]==a[r]) {
		l++;r--;
	}
	if(l>r) return false;
	else return true;
}
int main()
{
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(check10(i)) continue;
		if(check2(i)) continue;
		s++;
	}
	cout<<s;
	return 0;
}