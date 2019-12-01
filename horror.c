#include<stdio.h>
int main()
{
    int i,t,n,max;
    char c;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        max=0;
        while(1)
        {
        scanf("%d", &n);
            if(n>max)
                max=n;
            scanf("%c",&c);
            if(c!=' ')
                break;
        }
        printf("Case %d: %d\n",i,max);
    }

    return 0;
}
