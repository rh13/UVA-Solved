#include<stdio.h>
int main()
{
    int n,i,j,a,m=0,sum;
    while(scanf("%d",&n)!=EOF)
    {
    while(n>0)
    {
        m=m+n;
        n=n-2;
    }
    sum=(2*m)-1;
    a=(3*sum)-6;
        printf("%d\n",a);
    }
    return 0;
}
