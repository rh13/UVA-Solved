#include<stdio.h>
int main()

{
    long int t,n,a,b,c,d,s;
    scanf("%ld",&t);
   while(t--)
    {
        s=0;
        d=1;
        scanf("%ld",&n);
        while(n--)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            d=a*c;
            s+=d;
        }
        printf("%ld\n",s);
    }


    return 0;
}
