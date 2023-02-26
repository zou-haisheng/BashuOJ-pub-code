#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int a[200001];
	int main()
	{
	    int n;
	    cin>>n;
	    for (int i=1;i<=n;i++)
	    {
	   		cin>>a[i];
	 	}
	    sort(a+1,a+n+1);
	    int sum=1;
	    for (int i=1;i<=n;i++)
	    {
	
			if(a[i]==a[i+1])
			{
				sum++;
			}
			else
			{
	            cout<<a[i]<<" "<<sum<<endl;
	            sum=1;
			}
	    }
	  return 0;
	}
}
int main()
{
	zhs::main();
}