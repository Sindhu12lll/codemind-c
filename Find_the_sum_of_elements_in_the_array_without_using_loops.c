#include<stdio.h>
int main()
{
    int n,m[n],i,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
        t=t+m[i];
    }
    printf("%d",t);
    return 0;
}