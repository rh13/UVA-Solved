#include<stdio.h>
int main()
{
   unsigned long long int n,t;
    while(scanf("%llu",&n)!=EOF)
        {
            if(n==0)
            break;
      t=(10*n)/9;
    if(n%9==0)
    printf("%llu %llu\n",t-1,t);
    else printf("%llu\n",t);
        }
    return 0;
}
