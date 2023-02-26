#include<bits/stdc++.h>
using namespace std;
long long maap[101][101],bj[101][101]= {0};
int main() {
	long long k,n,m;
	cin>>k;
	if(k==1) {
		cin>>n>>m;
		for(long long i=1; i<=n; i++) {
			maap[i][1]=1;
		}
		for(long long i=1; i<=m; i++) {
			maap[1][i]=1;
		}
		for(long long i=2; i<=n; i++) {
			for(long long j=2; j<=m; j++) {
				maap[i][j]=maap[i-1][j]+maap[i][j-1];
			}
		}
		cout<<maap[n][m]<<endl;
	}

	if(k==2) {
		cin>>m>>n;
		long long xx,yy,dx,dy;
		cin>>xx>>yy;
		cin>>dx>>dy;
		for(long long i=yy; i<=dy; i++) {
			for(long long j=xx; j<=dx; j++) {
				bj[i][j]=1;
			}
		}
		for(long long i=1; i<=n; i++) {
			if(bj[i][1]==1) {
				break;
			}
			maap[i][1]=1;
		}
		for(long long i=1; i<=m; i++) {
			if(bj[1][i]==1) {
				break;
			}
			maap[1][i]=1;
		}
		for(long long i=2; i<=n; i++) {
			for(long long j=2; j<=m; j++) {
				if(bj[i][j]==0) {
					maap[i][j]=maap[i-1][j]+maap[i][j-1];
				}
			}
		}
		cout<<maap[n][m]<<endl;
	}
	return 0;
}