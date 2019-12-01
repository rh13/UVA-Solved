#include<stdio.h>
int main()
{
   long long int a,t=0,b,i,s;
   while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a<0 && b<0)
            break;
        s=a;
        for(i=1; i!=0; i++)
        {
            if(s==1)
                break;
            if(s%2==0)
                s=s/2;
            else
                s=3*s+1;
            if(s>b)
          break;
        }
        t++;
         printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t,a,b,i);
    }
    return 0;
}
