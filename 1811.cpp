#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int b;
	inline char c(int x)
	{
		if(x>=0&&x<=9) return x+'0';
		return x-10+'A';
	}
	struct node
	{
	    int l, a[20];
	    node(int x)
		{
			for(l=0;x;l++)
			{
				a[l] = x%b;
				x /= b;
			}
		}
	    void print()
	    {
	    	for(int i=l-1;i>=0;i--) printf("%c", c(a[i]));
		}
	    bool judge()
		{
			for(int i=0;i<l;i++)
				if(a[i]!=a[l-i-1]) return false;
			return true;
		}
	};
	int main()
	{
	    scanf("%d",&b);
	    for(int i=1;i<=300;i++)
	    {
	        node n(i*i);
	        if(n.judge())
			{
				node m(i);
				m.print();
				putchar(' ');
				n.print();
				putchar('\n');
			}
	    }
	    return 0;
	}
}
int main()
{
	zhs::main();
}