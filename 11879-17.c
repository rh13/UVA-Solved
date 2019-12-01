#include<stdio.h>
int main()
{
    int a,n,t,i;
    char c[1000];
    while(1)
    {
        a=0;
        gets(c);
        t=strlen(c);
        for(i=0;i<t;i++)
        {
            a=a*10+c[i]-'0';
        a=a%17;
        }
        if(a==0 && t==1)
            break;
        else if(a==0)
            printf("1\n");
        else printf("0\n");
    }
    return 0;
}

