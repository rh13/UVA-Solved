#include<stdio.h>
int main()
{
    int t,m,s,i,j,k,l;
    scanf("%d",&k);
    for(j=1; j<=k; j++)
    {
        scanf("%d %d",&t,&m);
            s=0;
        for(i=t; i<=m; i++)
            if((i%2)!=0)
                s=s+i;
        printf("Case %d: %d\n",j,s);
    }
    return 0;
}
