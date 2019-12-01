#include<stdio.h>
int main()
{
    long int a,b,c;
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a<=0 || b<=0 || c<=0)
            printf("Case %ld: Invalid\n",i);
        else if(a+b<=c || b+c<=a || a+c<=b)
            printf("Case %d: Invalid\n",i);
        else if(a==b && b==c)
            printf("Case %d: Equilateral\n",i);
        else if(a==b || a==c || b==c)
            printf("Case %d: Isosceles\n",i);
        else printf("Case %d: Scalene\n",i);
    }
    return 0;
}
