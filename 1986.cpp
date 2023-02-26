#include<bits/stdc++.h>

#define read(x) scanf("%d", &x)
#define ll long long
using namespace std;

int ans[4010];
int key,now,h;

void search(int digit)
{
	if (10 == digit)
	{
		ans[0] ++;
		ans[ans[0]] = now;
		return;
	}
	h *= 10;
	for(int i = 0; i < 10; i++)
	{
		ll temp = h / 10 * i + now;
		temp *= temp;
		if (temp % h == key % h)
		{
			temp = now;
			now = h / 10 * i + now;
			search(digit + 1);
			now  = temp;
		}
	}
	h /= 10;
}

int main()
{
	//freopen("b.in","r",stdin);
	//freopen("b.out","w",stdout);
	read(key); ans[0] = 0;
	now = 0; h = 1;
	search(1);
	sort(ans + 1, ans + 1 + ans[0]);
	for(int i = 1; i <= ans[0]; i++)
	{
		string s = "";
		while(ans[i])
		{
			char c='0' + ans[i] % 10;
			s = c + s;
			ans[i] /= 10;
		}
		for(int j = 1; j <= 9-s.length(); j++) printf("0");
		printf("%s\n", s.c_str());
	}
}