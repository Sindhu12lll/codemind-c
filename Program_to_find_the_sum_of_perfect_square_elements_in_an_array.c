#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            if(a[i]==j*j)
            {
                s=s+a[i];
            }
        }
    }
    printf("%d",s);
}