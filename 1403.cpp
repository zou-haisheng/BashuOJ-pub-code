#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int que[1000001];
	int main()
	{
	    int a, n;
	    int x, y;
	    while(cin>>a>>n)
		{
	        int st1=1, st2=1, en=1;
	        que[en] = a;
	        en++;
	        while(en<=n)
			{
	            int x=que[st1]*2+1;
	            int y=que[st2]*3+1;
	            if(x<y)
				{
	                que[en] = x;
	                en++;
	                st1++;
	            }
	            else if(x>y)
				{
	                que[en] = y;
	                en++;
	                st2++;
	            }
	            else
				{
	                que[en] = x;
	                en++;
	                st1++;
	                st2++;
	            }
	        }
	        cout<<que[en-1]<<endl;
	    }
	    return 0;
	}
}

int main()
{
	zhs::main();
}