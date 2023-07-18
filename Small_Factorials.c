#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,f,j,p=1;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            f=n-j;
            p=p*f;
        }
        printf("%d
",p);
    }
}