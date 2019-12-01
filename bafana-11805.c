#include<stdio.h>
int main()
{
    int k,p,n,t,c;
    scanf("%d",&t);
    c=1;
    while(t--)
    {
        scanf("%d %d %d",&n,&k,&p);
        while(p--)
        {
            k++;
        if(k>n)
            k=1;
        }
         printf("Case %d: %d\n",c++,k);

    }

    return 0;
}
