#include<stdio.h>
int main()
{
    int i,m,n,r,t,c=0;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d%d",&m,&n);
        c=0;
    for(i=m;i<=n;i++)
    {
        r=i%10;
        if(r==2 || r==3||r==9)
        {
            c++;
        }
    }
    printf("%d
",c);
    }
    return 0;
}