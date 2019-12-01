#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t;
    char c[7],a;
    scanf("%d%c",&t,&a);
    while(t--)
    {
        gets(c);
        if(strlen(c)>3)
            printf("3\n");
        else if(c[0]=='o' && c[1]=='n' || c[0]=='o' && c[1]=='e' || c[1]=='n' && c[2]=='e' || c[0]=='o' && c[2]=='n' || c[0]=='o' && c[2]=='e')
            printf("1\n");
        else printf("2\n");
    }

    return 0;
}
