#include<stdio.h>
int main()
{
    long int n=0;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&n);
       printf("%ld\n",n/2);
    }
    return 0;
}
