#include<stdio.h>
int main()
{
    int n,L[10],i,b=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&L[i]);
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(L[i]<=t)
        b+=1;
        else
        b+=2;
    }
    printf("%d",b);
    return 0;
}