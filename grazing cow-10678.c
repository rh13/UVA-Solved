#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
    int t;
   double a,b,d,l;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%lf %lf",&d,&l);
       a=l/2;
       b=sqrt(pow((l/2),2)-pow((d/2),2));
       printf("%.3lf\n",pi*a*b);
   }

    return 0;
}
