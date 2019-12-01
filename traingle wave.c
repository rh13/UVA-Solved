#include<stdio.h>
int main()
{
    int i,n,j,t,s,p,g,f;
    scanf("%d",&p);
    for(g=1;g<=p;g++)
        {
    scanf("%d %d",&n,&t);
    for(f=1;f<=t;f++)
        {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d",i);
        }
        printf("\n");
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
        printf("%d",i);
        }
    printf("\n");
    }
        if(g!=p || f!=t)
          printf("\n");
}
}
return 0;
}
