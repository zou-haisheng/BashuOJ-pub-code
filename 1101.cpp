#include<bits/stdc++.h>
using namespace std;
long long a[100001];
long long dao(long long n) {
	long long i=1,k=0,m=1,o=0;
	while(n!=0)	{
		a[i]=n%10;
		n=n/10;
		k++;
		i++;
	}
	for(i=k; i>=1; i--)	{
		a[i]=a[i]*m;
		o=o+a[i];
		m=m*10;
	}
	return o;
}
long long hw(long long i) {
	long long a[30005]= {0},n=0,j;
	while(i!=0)	{
		a[n]=i%10;
		n++;
		i=i/10;
	}
	for(j=0; j<=(n-1)/2; j++) {
		if(a[j]!=a[n-1-j]) return 0;
	}
	return 1;
}
int main() {
	long long n,l=0,bj1=0,u,bj2=0,m,p,s=0;
	cin>>n;
	while(bj2!=1)	{
		m=dao(n);
		p=m+n;
		u=p;
		s++;
		l=0;
		while(p!=0)		{
			p=p/10;
			l++;
		}
		if(l>15) {
			cout<<"Fail!";return 0;
		}
		bj2=hw(u);		n=u;
	}
	cout<<s;
	
}
