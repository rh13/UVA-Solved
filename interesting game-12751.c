#include<stdio.h>
int main()
{
    int t,n,k,x,i,j,a,rem;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d %d %d",&n,&k,&x);
       if(n>10000)
       break;
        a=rem=0;
        for(j=0;j<k;j++)
        {
            rem+=x;
            x++;
        }
        a=(n*(n+1))>>1;
        printf("Case %d: %d\n",i,a-rem);
    }


    return 0;
}
