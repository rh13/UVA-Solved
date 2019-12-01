272
#include<stdio.h>
int main()
{
    int i;
    char c;
    while(scanf("%c",&c)==1)
    {
        if(c=='"')
        {
            i++;
        if(i%2==1)
            printf("``");
        else if(i%2==0)
            printf("''");
        }
        else printf("%c",c);
    }

    return 0;
}
