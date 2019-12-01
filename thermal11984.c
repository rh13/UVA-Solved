#include<stdio.h>
int main()
{
    int n,i;
    float c,d,f,r,m;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%f %f",&c,&d);
        f=(9*c)/5+32;
        r=f+d;
        m=((5*r-160)/9);
        printf("Case %d: %.2f\n",i,m);
    }

    return 0;
}
