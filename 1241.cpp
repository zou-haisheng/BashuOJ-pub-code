#include<bits/stdc++.h>
using namespace std;
int n;
void h(int n,char a,char b,char c){
	if(n==1)cout<<a<<"->"<<c<<"\n";
	else{
		h(n-1,a,c,b);
		cout<<a<<"->"<<c<<"\n";
		h(n-1,b,a,c);
	}
}
int main(){
	cin>>n;
	h(n,'A','B','C');
	return 0;
}