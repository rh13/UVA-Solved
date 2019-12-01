#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0;
    double u,v,a,t,s;
    while( scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        c++;
    if(n==1)
    {
        scanf("%lf %lf %lf",&u,&v,&t);
        s=((u+v)/2)*t;
        a=(v-u)/t;
        printf("Case %d: %.3lf %.3lf\n",c,s,a);
    }
    if(n==2)
    {
        scanf("%lf %lf %lf",&u,&v,&a);
        t=(v-u)/a;
        s=((u+v)/2)*t;
        printf("Case %d: %.3lf %.3lf\n",c,s,t);
    }
    if(n==3)
    {
        scanf("%lf %lf %lf",&u,&a,&s);
        v=sqrt((u*u)+2*a*s);
        t=(2*s)/(u+v);
        printf("Case %d: %.3lf %.3lf\n",c,v,t);
    }
    if(n==4)
    {
        scanf("%lf %lf %lf",&v,&a,&s);
        u=sqrt((v*v)-2*a*s);
        t=(v-u)/a;
        printf("Case %d: %.3lf %.3lf\n",c,u,t);
    }

    }
    return 0;
}
