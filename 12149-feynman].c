#include<stdio.h>
int main()
{
    long long int i,sum,n;
    while(scanf("%lld",&n) && n>0)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=i*i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
