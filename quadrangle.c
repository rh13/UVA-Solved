#include<stdio.h>
int main()
{
    long long int a,b,c,d,n;
    scanf("%lld",&n);
    while(n--)
   {
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(a==0 || b==0 || c==0 || d==0){
        break;
       }
    if(a==b && b==c && c==d)
        printf("square\n");
    else if(a==b && c==d || a==c && b==d || a==d && b==c)
    printf("rectangle\n");
    else if(a+b+c<d || a+b+d<c || a+c+d<b || b+c+d<a)
        printf("banana\n");
    else printf("quadrangle\n");
    }
    return 0;
}
