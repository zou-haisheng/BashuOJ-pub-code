#include<iostream>
using namespace std;
int ans=0;
void f(int n,int k){
	if(n==1){
		ans++;
		return;
	}
	for(int i=2;i<=n;i++){
		if(i<k) continue;
		if(n%i==0){
			n/=i;
			f(n,i);
			n*=i;
		}
	}
	return;
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		ans=0;
		cin>>n;
		f(n,2);
		cout<<ans<<endl;
	}
	return 0;
}