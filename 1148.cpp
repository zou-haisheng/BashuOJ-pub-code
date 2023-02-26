#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
bool flag;
int a[6];
double m;
char b[5];

void search(int x)
{
	if(flag)
	{
		return;
	}
	if(x==5)
	{
		double sum=a[1];
		for(int i=1;i<=4;i++)
		{
			if(b[i]=='+') sum += a[i+1];
			if(b[i]=='-') sum -= a[i+1];
			if(b[i]=='*') sum *= a[i+1];
			if(b[i]=='/') sum /= a[i+1];
		}
		if(m==sum)
		{
			flag = true;
			return;
		}
		else return;
	}
	for(int i=1;i<=4;i++)
	{
		if(i==1) b[x] = '+';
		if(i==2) b[x] = '-';
		if(i==3) b[x] = '*';
		if(i==4) b[x] = '/';
		search(x+1);
		if(flag) return;
	}
	return;
}

int main()
{
	for(int i=1;i<=5;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%lf", &m);
	search(1);
	if(flag==1)
	{
		printf("%d", a[1]);
		for(int i=1;i<=4;i++)
		{
			printf("%c%d", b[i], a[i+1]);
		}
		printf("=%.0lf", m);
	}
	else printf("no answer!");
	return 0;
}