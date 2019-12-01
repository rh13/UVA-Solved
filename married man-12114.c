#include<stdio.h>
int main()
{
    int m1,n1,o1,p1,m2,n2,o2,p2,c=1,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d:%d %d:%d",&m1,&n1,&o1,&p1);
        scanf("%d:%d %d:%d",&m2,&n2,&o2,&p2);
        m1=m1*60+n1; o1=o1*60+p1;
        m2=m2*60+n2; o2=o2*60+p2;
        if(m2>o1 || m1>o2)
        printf("Case %d: Hits Meeting\n",c++);
        else printf("Case %d: Mrs Meeting\n",c++);
    }

}
