#include<stdio.h>
int main()
{
    int t1,t2,f,at,c1,c2,c3,ct,t,n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&at,&c1,&c2,&c3);
        if(c1<=c2 && c1<=c3)
            ct=(c2+c3)/2;
        else if(c2<=c1 && c2<=c3)
            ct=(c1+c3)/2;
        else if(c3<=c1 && c3<=c2)
            ct=(c1+c2)/2;
        t=t1+t2+f+at+ct;

        if(t>=90)
            printf("Case %d: A\n",i);
        else if(t>=80)
            printf("Case %d: B\n",i);
        else if(t>=70)
            printf("Case %d: C\n",i);
        else if(t>=60)
            printf("Case %d: D\n",i);
        else if(t<60)
            printf("Case %d: F\n",i);
    }

    return 0;
}

