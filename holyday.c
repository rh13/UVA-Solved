#include<stdio.h>
int main()
{
    int t,r,s,m,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&t,&r,&s);
        if(t<=20 && r<=20 && s<=20)
            printf("Case %d: good\n",i);
        else printf("Case %d: bad\n",i);
    }

    return 0;
}
