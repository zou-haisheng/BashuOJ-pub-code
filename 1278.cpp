#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int dx[4]={1,-1,0,0};
	int dy[4]={0,0,1,-1};
	int t,n,ha,la,hb,lb,nx,ny,k;
	char str;
	bool pd,flag[1001][1001];
	
	int dfs(int x,int y)
	{
		for(int i=0;i<4;i++)
		{
			nx=x+dx[i];
			ny=y+dy[i];
			if(nx>=0&&nx<n&&ny>=0&&ny<n&&!flag[nx][ny])
			{
				flag[nx][ny]=true;
				if((nx==hb)&&(ny==lb))
				{
					cout<<"YES"<<endl;
					pd=true;
					break;	
				}	
				else
				{
					dfs(nx,ny);
				}
			}	
		}	
	} 
	
	int main()
	{
		cin>>k;
		for(int t=1;t<=k;t++)
		{
			memset(flag,false,sizeof(flag));
			pd=false;
			cin>>n;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cin>>str;
					if(str=='#')
					{
						flag[i][j]=true;
					}
				}
			}
			cin>>ha>>la>>hb>>lb;
			if(flag[ha][la]||flag[hb][lb])
			{
				cout<<"NO"<<endl;
				continue;
			}
			else dfs(ha,la);
			if(!pd)
			{
				cout<<"NO"<<endl;
			}
		}
	
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
