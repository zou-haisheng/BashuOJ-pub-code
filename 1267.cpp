#include<bits/stdc++.h>
using namespace std;
int c[1001];
int f(int n){
	if(c[n]>0)return c[n];
	if(n==1)return 1;
	if(n==2)return 3;
	return c[n]=(2*(f(n-2))+f(n-1))%12345;
}
int main(){
	int s;
	cin>>s;
	cout<<f(s);
	return 0;
}