#include<stdio.h>
int main()
{
    int x[20],i,n,e,o;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]%2==0)
        e++;
        else
        o++;
    }
    printf("%d %d",e,o);
    return 0;
}