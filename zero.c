#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,n;
while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
     if(a==b && b==c)
             printf("*\n");
      else  if(a==b && b!=c)
            printf("C\n");
        else if(b==c && c!=a)
            printf("A\n");
        else
            printf("B\n");
    }
    return 0;
}
