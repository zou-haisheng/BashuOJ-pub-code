#include<cstdio>
#include<iostream> 
#define ll long long
#define INF_INT 0x3f3f3f3f
using namespace std;
const int N=1e6+5;
struct seg{
	int l,r,maxx,add;
	#define l(x) t[x].l
	#define r(x) t[x].r
	#define maxx(x) t[x].maxx
	#define add(x) t[x].add
}t[N*4];
int n,Q;
int a[N];
char c; 
inline void rd(int &x){
	x=0;
	c=getchar();
	while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9'){
		x=(x<<1)+(x<<3)+c-48;
		c=getchar();
	}
}
inline void push_up(int x){
	maxx(x)=max(maxx(x<<1),maxx(x<<1|1));
}
void build(int x,int l,int r){
	l(x)=l,r(x)=r;
	if(l==r){
		maxx(x)=a[l];
		return ;
	}
	int mid=l+r>>1;
	build(x<<1,l,mid);
	build(x<<1|1,mid+1,r);
	push_up(x);
}
int ask(int x,int l,int r){
	if(l(x)>=l&&r(x)<=r){
		return maxx(x);
	} 
	if(l(x)>r||r(x)<l)return 0;
	int mx=0,mid=l(x)+r(x)>>1;
	if(l<=mid)mx=max(mx,ask(x<<1,l,r));
	if(r>mid)mx=max(mx,ask(x<<1|1,l,r)); 
	return mx;
}
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	rd(n),rd(Q);
	for(int i=1;i<=n;i++)
		rd(a[i]);
	build(1,1,n);
	while(Q--){
		int x,y;
		rd(x),rd(y);
		printf("%d\n",ask(1,x,y));
	}
	return 0;
}