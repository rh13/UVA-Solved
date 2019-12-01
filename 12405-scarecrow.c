#include<stdio.h>
int main()
{
    int t,n,a,i,j;
    char c[110];
    while(scanf("%d",&t)==1)
        {
    for(j=1;j<=t;j++)
    {
        scanf("%d %s",&n,c);
        a=0;
        for(i=0;i<n;)
        {
            if(c[i]=='#')
                i++;
            else
            {
                a++;
                i+=3;
            }
        }
        printf("Case %d: %d\n",j,a);

    }
break;
        }
    return 0;
}

