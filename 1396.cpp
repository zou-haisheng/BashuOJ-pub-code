#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int sum;
	char c;
	int main()
	{
		do
		{
			c = getchar();
			if(c=='(') ++sum;
			if(c==')') --sum;
		}while(c!='@');
		sum?puts("NO"):puts("YES");
		return 0;
	}
}

int main()
{
	zhs::main();
}