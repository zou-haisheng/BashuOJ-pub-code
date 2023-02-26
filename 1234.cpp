#include<bits/stdc++.h>
using namespace std;
int a[2223]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
const int b[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int n, A, B, C, sum;
int need(int n)
{
	int num;
	num = 0;
	while(n)
	{
		num += b[n%10];
		n/=10;
	}
	return num;
}
int main()
{
	cin>>n;
	for(int i=10;i<2223;i++)
	{
		a[i]=need(i);
	}
	for(int i=0;i<=1111;i++)
	{
		for(int j=0;j<=1111;j++)
		{
			A = a[i];
			B = a[j];
			C = a[i+j];
			if(A+B+C+4==n)
			{
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}