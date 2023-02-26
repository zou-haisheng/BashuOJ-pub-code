#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	const int fx[10]={0, -2, -1, 1, 2, 2, 1, -1, -2};
	const int fy[10]={0, 1, 2, 2, 1, -1, -2, -2, -1};
	int bx, by, mx, my;
	long long f[30][30];
	bool s[30][30];
	int main()
	{
	    cin>>bx>>by>>mx>>my;
	    bx += 2;
		by += 2;
		mx += 2;
		my += 2;
	    f[2][2] = 1;
	    s[mx][my] = 1;
	    for(int i=1;i<=8;i++)
	        s[mx+fx[i]][my+fy[i]] = 1;
	    for(int i=2;i<=bx;i++)
		{
	        for(int j=2;j<=by;j++)
			{
	            if(s[i][j]) continue;
	            f[i][j] = max(f[i][j], f[i-1][j]+f[i][j-1]);
	    	}
	    }
	    cout<<f[bx][by];
	    return 0;
	}
}
int main()
{
	zhs::main();
}