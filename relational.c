#include<stdio.h>
int main()
{
    long long int a,b;
    int s,i;
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a<b)
            printf("<\n");
       else if(a>b)
            printf(">\n");
            else if(a==b)
            printf("=\n");
    }

    return 0;
}

