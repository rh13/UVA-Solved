#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<=0)
            break;

        if(n>=101)
            printf("f91(%d) = %d\n",n,n-10);
        else
        printf("f91(%d) = 91\n",n);
   }
    return 0;
}
