#include<stdio.h>
int main()
{
    long long int n,m,o,p,q,u,v,j,t,r,e,s,h,l,k,sk,hk,lk,kk;
    int i=0;
    while(scanf("%lld",&t)==1)
    {
    i++;
        printf("%4d.",i);
        kk=t/100000000000000;
        if(kk>0)
            printf(" %lld kuti",kk);
        n=t%100000000000000;

        lk=n/1000000000000;
        if(lk>0)
            printf(" %lld lakh",lk);
        m=n%1000000000000;

        hk=m/10000000000;
        if(hk>0)
            printf(" %lld hajar",hk);
        o=m%10000000000;

        sk=o/1000000000;
        if(sk>0)
            printf(" %lld shata",sk);
        p=o%1000000000;

        k=p/10000000;
        if(k==0 && t>10000000)
            printf(" kuti");
        q=p%10000000;

        l=q/100000;
        if(l>0)
            printf(" %lld lakh",l);
        u=q%100000;

        h=u/1000;
        if(h>0)
            printf(" %lld hajar",h);
        v=u%1000;

        s=v/100;
        if(s>0)
        printf(" %lld shata",s);
        r=v%100;
        e=r/1;
        if(e>0)
        printf(" %lld",e);
         if (t==0)
            printf(" %lld",t);
            printf("\n");

    }
    return 0;
}
