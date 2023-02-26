#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3, a1, b1, a, b, c, p, s;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a1 = abs(x1-x2);
    b1 = abs(y1-y2);
	a = sqrt(a1*a1+b1*b1);
	a1 = abs(x1-x3);
	b1 = abs(y1-y3);
	c = sqrt(a1*a1+b1*b1);
	a1 = abs(x2-x3);
	b1 = abs(y2-y3);
    b = sqrt(a1*a1+b1*b1);
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f", s);
	return 0;
}