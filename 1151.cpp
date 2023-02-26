#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int main()
	{
		int x,y,sum=0,e,dm;
		scanf("%d%d",&x,&y);
		int a[13]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		for(int i=1;i<=12;i++)
		{
			for(int j=1;j<=a[i];j++)
			{
				e = (j%10)*1000+(j/10)*100+(i%10)*10+i/10;
				dm = e*10000+i*100+j;
				if(dm<=y&&dm>=x) sum++;
			}
		}
		printf("%d",sum);
		return 0;
	}
}
int main()
{
	zhs::main();
}