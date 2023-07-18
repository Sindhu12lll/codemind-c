#include<stdio.h>
int main()
{
    int n,a[1000],d,i,c,g,t[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         t[i]=a[i];
     }
     scanf("%d",&d);
      for(i=0;i<n;i++)
      {
          if(a[i]>a[i+1])
          {
              a[i+1]=a[i];
          }
      }
      for(i=0;i<n;i++)
      {
          if(t[i]+d>=a[i])
          {
              printf("True ");
          }
          else
          {
              printf("False ");
          }
      }
}