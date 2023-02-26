#include<iostream>
using namespace std;
char c;
int s, t;
int main() 
{
	while(c!='E') 
	{
	    if(c=='W') s++;
		else if(c=='L') t++;
		if((s>=11||t>=11)&&(s-t>=2||t-s>=2))
		{
		    cout<<s<<":"<<t<<endl;
		    s=0;
			t=0;
		}
		cin>>c;
	}
	if(s+t!=0)cout<<s<<":"<<t<<"\n";
	return 0;
}