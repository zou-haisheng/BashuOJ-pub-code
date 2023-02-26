#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int main()
	{
		int n;
		cin>>n;
		int tot=0;
		for(int i=1;i<=n;i++){
			if(i%5==0){
				for(int j=1;j<=i;j++)
				{
					int y=pow(5.0, (j*1.0));
					if(i%y==0) tot++;
					else break;
				}
			}
		}
		int ans=0;
		if(n%2==1) cout<<tot<<' '<<0;
		if(n%2==0)
		{
			for(int i=1;i<=n;i++)
			{
				if(i%10==0)
				{
					for(int j=1;j<=i;j++)
					{
						int x=pow(5.0, (j*1.0));
						if(i%x==0) ans++;
						else break;
					}
				}
			}
			cout<<tot<<' '<<ans;
		}
		return 0;
	}
}
int main()
{
	zhs::main();
}