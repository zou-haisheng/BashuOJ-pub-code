#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f, sum=0;
int flag[1001]={};
int main() 
{
	
	cin>>a>>b>>c>>d>>e>>f;
	for(int i=0;i<=a;i++)
	{
		for(int j=0;j<=b;j++)
		{
			for(int k=0;k<=c;k++)
			{
				for(int l=0;l<=d;l++)
				{
					for(int m=0;m<=e;m++)
					{
						for(int n=0;n<=f;n++)
						{
							flag[i+j*2+k*3+l*5+m*10+n*20] = 1;
							//printf ("%d %d %d %d %d %d\n", i, j, k, l, m, n);
						}
					}
				}
			}
		}
	}
	for(int i=1;i<=1000;i++)
	{
		sum += flag[i];
	}
	cout<<"TOTAL="<<sum;
	return 0;
}