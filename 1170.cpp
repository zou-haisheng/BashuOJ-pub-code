#include<bits/stdc++.h>
  int main()  
  {  
    int x,s=0;  
    scanf("%d",&x);     
    if(x<0)
    {  
      printf("-");
      x=x*(-1);
   }  
   while(x>0)
   {  
     s=s*10+x%10;
     x=x/10;
   }  
   printf("%d",s);
   return 0;  
 }