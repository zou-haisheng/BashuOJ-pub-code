#include<bits/stdc++.h>
using namespace std;
long double a,b,c,x,y,z,s;
int main()
{
    cin>>x>>y>>z;
    for(a=1;a<=100/x;a++)
	{
	    for(b=1;b<=100/y;b++)
		{
	    	for(c=1;c<=100/z;c++)
			{    		
				if(a+b+c==100&&a*x+b*y+c*z==100) cout<<a<<" "<<b<<" "<<c<<endl;		
			}	
		}   
	}
}