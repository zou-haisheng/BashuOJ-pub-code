#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	string str;
	int a[10], b, tmp;
	int main()
	{
		cin>>str;
		a[1] = str[0]-'0';
		a[2] = str[2]-'0';
		a[3] = str[3]-'0';
		a[4] = str[4]-'0';
		a[5] = str[6]-'0';
		a[6] = str[7]-'0';
		a[7] = str[8]-'0';
		a[8] = str[9]-'0';
		a[9] = str[10]-'0';
		if(str[12]=='X') b = 10;
		else b = str[12]-'0';
		for(int i=1;i<=9;i++)
		{
			tmp += a[i]*i;
		}
		tmp %=11;
		if(tmp==b) cout<<"Right";
		else
		{
			for(int i=0;i<str.length()-1;i++) cout<<str[i];
			if(tmp==10) cout<<'X';
			else cout<<tmp;
		}
		return 0;
	}
}

int main()
{
	zhs::main();
}