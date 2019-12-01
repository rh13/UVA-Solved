#include<stdio.h>
int main()
{
    int n,i,p1,p2,m,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&p1,&p2,&m);
    t=m*(p1+(p1-p2))/(p1+p2);
    if(t<=0)
        printf("0\n");
    else  printf("%d\n",t);
    }
    return 0;
}
