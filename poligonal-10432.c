#include<stdio.h>
int main()
{
    double r,s,PI,n;
    PI=4*atan(1);

    while(scanf("%lf %lf",&r,&s)!=EOF)
    {
         n=r*s*r*sin((2.00*PI)/s)/2.00;
        printf("%.3lf\n",n);
    }

    return 0;
}
