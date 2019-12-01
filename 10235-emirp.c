#include<stdio.h>
int prime(long int n)
{
    int i;
    for(i=2;i<=n/2;++i)
    {
       if(n%i==0)
       return 0;
       }
    return 1;
}
int rev(unsigned int x)
{
   unsigned int r=0;
    do
    r=(r*10)+(x%10);
    while((x/=10)>0);
    return r;

}
int main()
{
    long int x;
    while(scanf("%ld",&x)!=EOF)
        {
       if(prime(x)==0)
        printf("%ld is not prime\n",x);
    else {
            int m=rev(x);
        if(prime(m)==1 && m!=x)
            printf("%ld is emirp.\n",x);
    else printf("%ld is prime.\n",x);
         }
        }
    return 0;
}

