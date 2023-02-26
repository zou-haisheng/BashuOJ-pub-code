#include<cstdio>
const int mod=12345;
int n;
inline int pow(int a,int b){
	int ans=1;for(;b;b>>=1,a=a*a%mod)if(b&1)ans=ans*a%mod;
	return ans;
}
signed main(void){
	scanf("%d",&n);
	printf("%d",(7*pow(8,n-1)%mod+9*pow(10,n-1)%mod)*6173%mod);
} 