#include<bits/stdc++.h>
using namespace std;

int main()
{
	double xa, ya, xb, yb, a, b, c;
	cin>>xa>>ya>>xb>>yb;
	a = xa-xb;
	b = ya-yb;
	c = sqrt(a*a+b*b);
	printf("%.3f", c);
	return 0; 
} 