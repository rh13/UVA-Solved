#include<stdio.h>
int main()
{
    int  n,m,i=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(n%2==0){
        printf("Case %d: %d\n",i++,n/2);
        }
    }

    return 0;
}
