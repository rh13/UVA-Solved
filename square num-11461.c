#include<stdio.h>
#include<math.h>
int main()
{
    long int n1,n2,i,m,p1,p2,c;
    while(scanf("%ld %ld",&n1,&n2)!=EOF)
    {
        if(n1==0 && n2==0)
            break;
        c=0;
        p1=sqrt(n1);
        p2=sqrt(n2);
        for(i=p1;i<=p2;i++)
        {
            m=pow(i,2);
            if(m>=n1 && m<=n2)
                c++;
                if(m>n2)
                    break;
        }
        printf("%ld\n",c);
    }

    return 0;
}
