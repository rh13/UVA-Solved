#include<stdio.h>
int main()
{
    int t,r,s,i,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&t)!=EOF)
    {
        if(t==0){
            printf("END OF OUTPUT\n");
        break;
        }
    sum=0;
    for(i=2;i<=t;i++)
    {
        s=t/i;
        if(t%i==0)
        sum+=s;
    }
    if(sum<t)
     printf("%5d  DEFICIENT\n",t);
   else if(sum==t)
     printf("%5d  PERFECT\n",t);
     else printf("%5d  ABUNDANT\n",t);
    }

    return 0;
}
