#include<stdio.h>
int main()
{
    int m,n,c,v,u;
    while(scanf("%d %d %d",&n,&m,&c))
    {
        if (n==0 && m==0 && c==0)
           break;
        v=(n-7)*(m-7);
        u=v/2;
        if(v%2==1 && c== 1)
            u++;
        printf("%d\n",u);

    }

    return 0;
}
