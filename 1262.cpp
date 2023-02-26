#include<stdio.h>
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int i,n,ori,last,ans[101]={0};
    scanf("%d",&n);
    ori=n;
    for(i=2;i<=ori;i++)
    {
        while(prime(i)==1&&n%i==0)
        {
            ans[i]++;
            n=n/i;
        }
        if(n==1)
        {
            last=i;
            break;
        }
    }
    for(i=2;i<last;i++)
	{
        if(ans[i]==1)
        {
            printf("%d*",i);
        }
        if(ans[i]>1)
        {
            printf("%d^%d*",i,ans[i]);
        }
    }
    if(ans[last]==1)
    {
        printf("%d",last);
    }
    if(ans[last]>1)
    {
        printf("%d^%d",last,ans[last]);
    }
    return 0;
} 