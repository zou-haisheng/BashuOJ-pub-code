#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int main()
	{
		double s, bt, wt;
		cin>>s;
		bt = 50 + s/3;
		wt = s/1.2;
		if(bt<wt)
		{
			cout<<"Bike";
		}
		else if(bt==wt)
		{
			cout<<"All";
		}
		else
		{
			cout<<"Walk";
		}
		return 0;
	}
}

int main()
{
	zhs::main();
}