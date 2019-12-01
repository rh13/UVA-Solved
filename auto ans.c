#include<stdio.h>///11547
int main()
{
    int n,a,b,c,d,e,f,t,r,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        //a=((((((((n*567)/9)+7492)*235)/47)-498)%100)/10);
        a=n*567;
        b=a/9;
        c=b+7492;
        d=c*235;
        e=d/47;
        f=e-498;
        r=f%100;
        s=r/10;
        if(s<0)
            printf("%d\n",(s*-1));
        else printf("%d\n",s);
    }

    return 0;
}
