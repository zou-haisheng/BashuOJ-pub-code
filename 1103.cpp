#include<bits/stdc++.h>
using namespace std;
int n, a, b, c, maxx, total, temp;
char gb, xs;
string name, maxname;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		temp = 0;
		cin>>name>>a>>b>>gb>>xs>>c;
		if(a>80 && c) temp += 8000;
		if(a>85 && b>80) temp += 4000;
		if(a>90) temp += 2000;
		if(xs=='Y' && a>85) temp += 1000;
		if(gb=='Y' && b>80) temp += 850;
		total += temp;
		if(temp>maxx)
		{
			maxx = temp;
			maxname = name;
		}
	}
	cout<<maxname<<endl<<maxx<<endl<<total;
	return 0;
}