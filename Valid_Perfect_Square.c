#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,i,f=0;
        scanf("%d",&a);
        for(i=1;i<a;i++)
        {
            if(a==i*i)
            {
                f=1;
            }
        }
        if(f==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}