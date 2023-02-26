#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int ans;
	string a;
	int main()
	{
	    int a,b,s,maxx=0,i,d=0; 
	    for (i=1;i<8;i++)   
	      {
	        cin>>a>>b; 
	        s=a+b; 
	        if ((s>maxx)&&(s>8)) maxx=s,d=i;
	      }
	    cout<<d<<endl;
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}