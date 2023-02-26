#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int n;
	struct score{
		int ch;
		int ma;
		int en;
		int tot;
		int num;
	}stu[301];
	int main()
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>stu[i].ch>>stu[i].ma>>stu[i].en;
			stu[i].tot = stu[i].ch+stu[i].ma+stu[i].en;
			stu[i].num = i;
		}
		for(int i=1;i<=n-1;i++)
		{
			for(int j=1;j<=n-i;j++)
			{
				if(stu[j].tot<stu[j+1].tot)swap(stu[j],stu[j+1]);
				if(stu[j].tot==stu[j+1].tot)
				{
					if(stu[j].ch<stu[j+1].ch) swap(stu[j],stu[j+1]);
					else if(stu[j].ch==stu[j+1].ch&&stu[j].num>stu[j+1].num)
					swap(stu[j],stu[j+1]);
			}
			}
		}
		for(int i=1;i<=5;i++)
		{
			cout<<stu[i].num<<' '<<stu[i].tot<<'\n';
		}
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}