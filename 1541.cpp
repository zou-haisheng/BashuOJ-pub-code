#include<bits/stdc++.h>
#define ll long long
#define INF_IT 0x3f3f3f3f
#define INF_LL 0x7fffffffffffffff
using namespace std;
struct node{
	int id,v;
};
deque<node>q;
multiset<int>s;
int n,m,x,cnt;
int main(){
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		node tp;
		tp.id=i-1,tp.v=x; 
		q.push_back(tp);
		s.insert(x);
	}
	set<int>::iterator it;
	while(!q.empty()&&!s.empty()){
		bool f=0;
		node temp=q.front();
		q.pop_front();
		it=s.end();
		it--;
		if(temp.v!=*it)q.push_back(temp); 
		else {
			if((it=s.find(temp.v))!=s.end())s.erase(it);
			cnt++;
			if(temp.id==m){
				printf("%d",cnt);
				return 0;
			} 
		}
	}
	return 0;
}