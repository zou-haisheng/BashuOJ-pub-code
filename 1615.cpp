#include<iostream>
#include<cstdio>
#define maxn 50005
using namespace std;
int n, q, v[maxn];
struct fdfdfd
{
	int l, r, maxx, minn;
}a[maxn<<2];
void pushup(int x)
{
	a[x].maxx = max(a[x<<1].maxx, a[x<<1|1].maxx);
	a[x].minn = min(a[x<<1].minn, a[x<<1|1].minn);
}
void build(int x, int left, int right)
{
	a[x].l = left;
	a[x].r = right;
	if(left==right)
	{
		a[x].maxx = a[x].minn = v[left];
		return;
	}
	int mid=(left+right)>>1;
	build(x<<1, left, mid);
	build(x<<1|1, mid+1, right);
	pushup(x);
}
fdfdfd query(int x, int left, int right)
{
	if(a[x].r<left||a[x].l>right) return (fdfdfd){0,0,-1,0x7fffffff};
	if(left<=a[x].l&&right>=a[x].r) return a[x];
	fdfdfd temp1=query(x<<1, left, right), temp2=query(x<<1|1, left, right), temp;
	temp.maxx = max(temp1.maxx, temp2.maxx);
	temp.minn = min(temp1.minn, temp2.minn);
	return temp;
}
int main()
{
	scanf("%d%d", &n, &q);
	for(int i=1;i<=n;i++) scanf("%d", &v[i]);
	build(1, 1, n);
	while(q--)
	{
		int f1, f2;
		scanf("%d%d", &f1, &f2);
		fdfdfd f3=query(1, f1, f2);
		printf("%d\n", f3.maxx-f3.minn);
	}
	return 0;
}