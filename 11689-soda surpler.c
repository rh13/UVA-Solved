#include<stdio.h>
int main()
{
    int t,e,f,c,m,r,s,i,h;
    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++)
            {
        scanf("%d %d %d",&e,&f,&c);
        r=0;
        s=e+f;
        while(s>=c)
        {
            m=s/c;
            r=r+m;
            s=m+(s%c);
        }
        printf("%d\n",r);
     }
    }

    return 0;
}
