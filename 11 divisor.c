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
        a=a%11;
        }
        if(a==0 && t==1)
            break;
        else if(a==0)
            printf("%s is a multiple of 11.\n",c);
        else printf("%s is not a multiple of 11.\n",c);
    }
    return 0;
}
