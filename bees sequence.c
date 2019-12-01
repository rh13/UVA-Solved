#include<stdio.h>///12459
int main()
{
    long long int i,j,n,m,b;
    while(1){
     scanf("%lld",&n);
     if(n==0 || n>80)
        break;
    m=0;
    j=1;
    for(i=0;i<n;i++)
    {
        b=m+j;
        m=j;
        j=b;
    }
    printf("%lld\n",b);
    }
    return 0;
}
