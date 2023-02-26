#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int main()
	{
		char a[1111],b[1111];
		int c[1111];
		cin>>a>>b;
		int i,j,k=0;
		int r=0;
		for(i=strlen(a)-1,j=strlen(b)-1; i>=0&&j>=0; i--,j--) {
			int p=(a[i]-'0')+(b[j]-'0')+r;
			r=p/10;
			c[k++]=p%10;
		}

		while(i>=0) {
			int p=(a[i]-'0')+r;
			r=p/10;
			c[k++]=p%10;
			i--;
		}
		while(j>=0) {
			int p=(b[j]-'0')+r;
			r=p/10;
			c[k++]=p%10;
			j--;
		}
		if(r) {
			c[k++]=r;
		}
		for(int i=k-1; i>=0; i--) {
			cout<<c[i];
		}
		return 0;
	}
}

int main()
{
	zhs::main();
}