#include<stdio.h>
int main()
{
    long long int f[100];
    int i,n;
    f[1]=1,f[2]=2;
    for(i=3;i<=50;i++)
        f[i]=f[i-1]+f[i-2];
    while(scanf("%d",&n) && n!=0)
    {
        printf("%lld\n",f[n]);

    }

}
