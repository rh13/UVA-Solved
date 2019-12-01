#include<stdio.h>
int GCD(int i,int j)
{
    int k;
   while(i!=0)
    {
        k=j%i;
        j=i;
        i=k;
    }
    return j;
}

int main()
{
    int n,g,i,j;
    while(scanf("%d",&n) && n!=0)
    {
        long g=0;
        for(i=1;i<n;i++)
            for(j=i+1;j<=n;j++)
            {
                g+=GCD(i,j);
            }
       printf("%ld\n",g);
    }
    return 0;
}
