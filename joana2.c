#include<stdio.h>
int main()
{
    long long n,sum;
   while (scanf("%lld",&n)!=EOF)
   {
   sum=((n*(n+2))/2)*3-6;
     printf("%lld\n",sum);
   }
return 0;
}
