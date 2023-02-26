#include <iostream> 
using namespace std; 

int f(int m, int n) 
{ 
    if(m == 0) return   1; 
    if(n == 1) return   1;    
    if(m < 0)  return   0; 
    return f(m-n, n) + f(m, n-1); 
}

int main() 
{ 
    int t; 
    int m, n; 
    cin>>t; 
    while(t--) 
    { 
        cin>>m>>n; 
        cout<<f(m, n)<<endl; 
    }
    return 0; 
} 
