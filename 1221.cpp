#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int n;
	int a[1000]={0};
	int he=0;
	int b[1000]={0};
	void dfs(int k) {
		if(k==n) {
			he=0;
			for(int i=1; i<k; i++) {
				cout<<a[i]<<" ";
			}
			for(int i=1;i<=n;i++){
				he+=i;
			}
			for(int i=1;i<k;i++){
				he-=a[i];
			}
			cout<<he;
			cout<<endl;
		}
		for(int i=1; i<=n; i++) {
			if(b[i]==0) {
				a[k]=i;
				b[i]=1;
				dfs(k+1);
				b[i]=0;
			}
		}
	}
	int main() {
		cin>>n;
		dfs(1);
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
