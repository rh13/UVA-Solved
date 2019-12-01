#include<stdio.h>
int main()
{
    int n,c=0,t=0,s=1,i;
    while(scanf("%d",&n)==1)
        {
            if(n<0)
                break;
        else {
            for(i=0;i<n;i++)
        {
            if(pow(2,i)>=n)
        {
            t=i;
        break;
        }
        }
        c++;
        printf("Case %d: %d\n",c,t);
        }
    }
    return 0;
}
