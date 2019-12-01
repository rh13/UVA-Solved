#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double p,d,u,v,t1,t2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if(v==0 || u == 0 || v >=u)
        {
        printf("Case %d: can't determine\n",i);
        continue;
        }
        t1=d/u;
        t2=d/(sqrt(u*u-v*v));
        p=t2-t1;
        printf("Case %d: %.3lf\n",i,p);
    }
    return 0;
}
