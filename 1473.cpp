#include<bits/stdc++.h>
using namespace std;
const int M=10000;
int t,a,b;
int did(int a,int b){
	int k=1,sum=a;
	while(b){
		if(b%2==1){
			k=k*sum%M;
		}
		sum=sum*sum%M;
		b/=2;
	}
	return k;
}
int main(){
	cin>>t;
	while(t--){
		scanf("%d%d",&a,&b);
		int ans=0,x=a/M;
		a%=M;
		for(int i=1;i<=M;i++){
			if(i<=a){
				ans=(ans+(x+1)*did(i,b))%M;
			}else{
				ans=(ans+x*did(i,b))%M;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}