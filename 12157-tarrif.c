#include<stdio.h>
int main()
{
    int t,n,i,k,s[100];
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        int m=0,j=0;
        scanf("%d",& n);
      for(i=0;i<n;i++)
      {
          scanf("%d",&s[i]);
          m+=(s[i]/30)+1;
          j+=(s[i]/60)+1;
      }
      m*=10;
      j*=15;

       if(m<j)
        printf("Case %d: Mile %d\n",k,m);
       else if(j<m)
        printf("Case %d: Juice %d\n",k,j);
       else  printf("Case %d: Mile Juice %d\n",k,j);
    }

    return 0;
}
