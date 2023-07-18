#include<stdio.h>
int main()
{
    int n,a=0,i,b=1,c,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(a==n)
        {
            count++;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(count==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}