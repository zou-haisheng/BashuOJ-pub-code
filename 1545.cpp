#include<algorithm>
#include<cstdio>
#define int long long
#define function void
#undef int
int n;
int input[1000001], s[1000001], ans[1000001];
int top;
signed main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++) scanf("%d", input+i);
	for(int i=1;i<=n;i++)
	{
		if(input[s[top]]>=input[i] || top==0) s[++top] = i;
		else
		{
			while(input[s[top]]<input[i] && top!=0) ans[s[top--]] = i;
			s[++top] = i;
		}
	}
	for(int i=1;i<=n;i++) printf("%d ", ans[i]);
	return 0;
}