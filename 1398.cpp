#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int a[555], t, n, x[555];
	char c;
	string s;
	int main()                                                                                                                     
	{
	    a['{']=1;
		a['[']=2;
		a['(']=3;
		a['<']=4;
	    a['}']=8;
		a[']']=7;
		a[')']=6;
		a['>']=5;                         
	    cin>>n;
	    while(n--)                                           
	    {
	    	t = 0;
			a[0] = 0;                          
	    	cin>>s;
	    	for(int i=0;i<s.length();i++)                                            
	    	{                                                                                         
	    		c = s[i];
				if(a[c]<=4) 
				{
					if(x[t]<=a[c]) x[++t] = a[c];
					else
					{
						t = 1;
						break;
					}
				}
				else 
				{
				    if(a[c]+x[t]==9) t--;
					else
					{
						t=1;
						break;
					}																	  
				}                                                                              
			}
			if(!t) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;                                         
		}                                                                 
	    return 0;
	}
}

int main()
{
	zhs::main();
}