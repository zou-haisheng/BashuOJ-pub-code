#include<bits/stdc++.h>
using namespace std;
int main() {
	double n,m=0,q=200,s=50,k;
	cin>>n>>k;
	k=k/100;
	for(int i=1;i<=20;i++){
		s+=n;
		q+=q*k;
		if(s>q){
		cout<<i+1;
		return 0;	
		}
	}
	cout<<"Impossible";
return 0;	
}