#include<bits/stdc++.h>
using namespace std;
int m, sum, len;
string a;
char b[17]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};

int f(int i)
{
	int temp=1;
	for(int j=0;j<i;)
	{
		temp *= m;
		j++;
	}
	return temp;
}

int f1(char c)
{
	for(int i=0;i<=16;i++)
	{
		if(c==b[i])
		{
			return i;
		}
	}
}

int main()
{
	cin>>m>>a;
	len = a.length();
	int i=0;
	for(int i=0;i<len;i++)
	{
		sum += f1(a[i])*f(len-i-1);
	}
	cout<<'('<<a<<')'<<m<<"=("<<sum<<")10";
	return 0;
}