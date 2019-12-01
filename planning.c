///11559-event planning
#include<stdio.h>
int main()
{
    int n,b,h,w,p,i,a,s;
    while(scanf("%d %d %d %d",&n,&b,&h,&w)!=EOF)
    {
    while(h--)
    {
        scanf("%d",&p);
        for(i=0;i<w;i++)
        {
            scanf("%d",&a);
        }
        if(a>n)
        s=p*n;
    }
    if(s<1000)
            printf("%d\n",s);
    else printf("stay home\n");
}
    return 0;
}
