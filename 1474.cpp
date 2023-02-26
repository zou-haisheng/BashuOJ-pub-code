#include<bits/stdc++.h>
//#include<time.h>
using namespace std;
namespace zhs{
	struct point
	{
	    double x,y;
	}p[200010];
	int n, temp[200010];
	bool cmp(const point &A, const point &B)
	{
	    if(A.x==B.x) return A.y<B.y;
	    else return A.x<B.x;
	}
	bool cmps(const int &a, const int &b)
	{
	    return p[a].y<p[b].y;
	}
	double distance(int i, int j)
	{
	    return sqrt((p[i].x-p[j].x) * (p[i].x-p[j].x) + (p[i].y-p[j].y) * (p[i].y-p[j].y));
	}
	double merge(int left, int right)
	{
	    double dis=2<<20;
	    if(left==right) return dis;
	    if(left+1==right) return distance(left,right);
	    int mid=(left+right)>>1;
	    double d1=merge(left,mid);
	    double d2=merge(mid+1,right);
	    dis = min(d1,d2);
	    int k=0;
	    for(int i=left;i<=right;i++)
	        if(fabs(p[i].x-p[mid].x)<=dis) temp[k++] = i;
	    sort(temp, temp+k, cmps);
	    for(int i=0;i<k;i++)
	        for(int j=i+1;j<k&&p[temp[j]].y-p[temp[i]].y<dis;j++)
	            dis = min(dis, distance(temp[i], temp[j]));
	    return dis; 
	}
	int main()
	{
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	        scanf("%lf %lf", &p[i].x, &p[i].y);
	    sort(p, p+n, cmp);
	    printf("%.2lf\n", merge(0,n-1));
	    return 0;
	}
}
int main()
{
	zhs::main();
}