#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    int a[3];
    for(int i=1;i<=T;i++)
    {
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        sort(a,a+3);
        printf("Case %d: %d\n",i,a[1]);
    }
    return 0;
}
