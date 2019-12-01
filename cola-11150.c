#include<stdio.h>
int main()
{
    int n,total;
    while(scanf("%d",&n)!=EOF)
    {
        total=n+(n/2);
        printf("%d\n",total);
    }


    return 0;
}
