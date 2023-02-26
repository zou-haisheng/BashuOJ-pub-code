#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c, p, s;
    cin>>a>>b>>c;
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f", s);
	return 0;
}