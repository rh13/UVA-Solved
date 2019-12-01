#include<stdio.h>
int main()
{
    int n,m,l,a;
   while(scanf("%d %d",&m,&n)!=EOF)
    {
    a=m;
    while(m>=n)
    {
        a=a+m/n;
        m=m/n+m%n;
    }
    printf("%d\n",a);
    }
    return 0;
}
