#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int k,i;
	double s;
	int main()
	{
	    cin>>k;
	    do
	    {
	        i++;
	        s=s+(1.0/i);
	    }
		while(s<=k);
	    cout<<i;
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
