#include<stdio.h>
int main()
{
    int k,r,n,i=1;
    while(scanf("%d %d",&r,&n)!=EOF)
    {
        if(r==0 && n==0)
        break;
      k=(r-1)/n;
       if(k>26)
       printf("Case %d: impossible\n",i++);

    else printf("Case %d: %d\n",i++,k);
    }

    return 0;
}
