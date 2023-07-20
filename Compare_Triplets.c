#include<stdio.h>
int main()
{
    int a[3];
    int b[3];
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    scanf("%d%d%d",&b[0],&b[1],&b[2]);
    int p=0;
    int q=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        p++;
        if(b[i]>a[i])
        q++;
    }
    printf("%d %d",p,q);
}