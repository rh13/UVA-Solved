#include<stdio.h>
int main()
{
    int a,b,i,t,l;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
       if(a<=0)
        break;
        t=0;
        for(i=a;i<=b;i++)
        {
            l=sqrt(i);
            if(l*l==i)
                t++;
        }

        printf("%d\n",t);

    }


    return 0;
}
