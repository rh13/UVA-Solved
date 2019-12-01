///12279- emogool balance
#include<stdio.h>
int main()
{
    int i,n,a[1000],b,c,t=0;
   while(scanf("%d",&n)!=EOF)
  {
      if(n==0)
        break;
    t++;
     b=0;
     c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            c++;
        else b++;
    }
    printf("Case %d: %d\n",t,b-c);
  }
  return 0;
}
