#include<bits/stdc++.h>
using namespace std;
int tar[9];
void Read(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	for(int i=1;i<=8;i++)cin>>tar[i];
}
struct BfsStr{
	int state[9];
	string opStr;
};
int conver(BfsStr stat){
	int re=0;
	for(int i=1;i<=8;i++)
		re=re*10+stat.state[i];
	return re;
}
bool check(BfsStr stat){
	for(int i=1;i<=8;i++)
		if(stat.state[i]!=tar[i])return false;
	return true;
}
map<int,bool>vst;
void Solve(){
	queue<BfsStr>q;
	q.push((BfsStr){{0,1,2,3,4,5,6,7,8}});
	while(!q.empty()){
		BfsStr now=q.front();
		q.pop();
		if(check(now)){
			cout<<now.opStr.length()<<'\n'<<now.opStr;
			return;
		}
		if(vst[conver(now)])continue;
		vst[conver(now)]=true;
		BfsStr A=now;
		A.opStr=A.opStr+'A';
		A.state[1]=now.state[8];
		A.state[2]=now.state[7];
		A.state[3]=now.state[6];
		A.state[4]=now.state[5];
		A.state[5]=now.state[4];
		A.state[6]=now.state[3];
		A.state[7]=now.state[2];
		A.state[8]=now.state[1];
		q.push(A);
		BfsStr B=now;
		B.opStr=B.opStr+'B';
		B.state[1]=now.state[4];
		B.state[2]=now.state[1];
		B.state[3]=now.state[2];
		B.state[4]=now.state[3];
		B.state[5]=now.state[6];
		B.state[6]=now.state[7];
		B.state[7]=now.state[8];
		B.state[8]=now.state[5];
		q.push(B);
		BfsStr C=now;
		C.opStr=C.opStr+'C';
		C.state[1]=now.state[1];
		C.state[2]=now.state[7];
		C.state[3]=now.state[2];
		C.state[4]=now.state[4];
		C.state[5]=now.state[5];
		C.state[6]=now.state[3];
		C.state[7]=now.state[6];
		C.state[8]=now.state[8];
		q.push(C);
	}
}
signed main(){
	Read();
	Solve();
	return 0;
}