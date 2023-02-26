#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int sum, a, c, i=1;
	int main()
	{
	    while(cin>>a)
	    {
	        sum += 300;
	        if(a>sum)
	        {
	            cout<<-i;
	            return 0;
	        }
	        else 
	        {
	            c += ((sum-a)/100) * 100;
	            sum = (sum-a) % 100;
	        }
	        i++;
	    }
	    cout<<c*1.2 + sum;
	    return 0;
	}
}

int main()
{
 	zhs::main();
}
