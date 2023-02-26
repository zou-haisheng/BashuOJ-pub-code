#include<cstdio>
#include<iostream>
using namespace std;
char a[105];
int n,s,step=0,space;
void putes()
{
	if(step>=10) cout<<"step"<<step<<":";
	else cout<<"step "<<step<<":";
	//强迫症出题人快乐水
	step++;
	for(int i=1;i<=s;i++) cout<<a[i];
	cout<<endl;
}
void move(int l)
{
	swap(a[l],a[space]); swap(a[l+1],a[space+1]);
	space=l;
}
int main()
{
	cin>>n;
	s=2*n+2;
	space=s-1;
	for(int i=1;i<=n;i++)
	{
		a[i]='o';
		a[n+i]='*';
	}
	a[s-1]=a[s]='-';
	putes();
	int larr=n+1, rarr=s-1;
	for(int i=1;i<=2*n-7;i++)
	{
		if(i%2==0) move(--(--rarr));
		else move(--larr);
		putes();
	}
	move(8);putes();
	move(2); putes();
	move(7); putes();
	move(1); putes();
}