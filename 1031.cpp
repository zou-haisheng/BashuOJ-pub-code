#include<bits/stdc++.h>
using namespace std;
int d[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	float a, b;
	char c;
	cin>>a>>b>>c;
	if(c=='+') printf("%.1f", a+b);
	else if(c=='-') printf("%.1f", a-b);
	else if(c=='*') printf("%.1f", a*b);
	else if(c=='/') if(b==0) printf("error");
					else printf("%.1f", a/b);
	return 0;
}
