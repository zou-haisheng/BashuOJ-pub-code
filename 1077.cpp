#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, ans=0;
	double sum=0, total=0;
	char a;
	string s;
	cin>>n>>a;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		if(s[0]=='c' && s[1]=='o' && s[2]=='n') ans++;
		int j=0;
		while(s[j]!='\0')
		{
			total++;
			if(s[j]=='e') sum++;
			j++;
		}
	}
	cout<<ans<<endl<<fixed<<setprecision(2)<<sum/total*100<<'%';
	return 0;
}