#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,m,n,o,p;
    for(a=6;a<=200;a++)
    {
        m=a*a*a;
        for(b=2;b<a;b++)
        {
            n=b*b*b;
            for(c=b+1;c<a;c++)
            {
                o=c*c*c;
                for(d=c+1;d<a;d++)
                {
                    p=d*d*d;
                    if(m==n+o+p)
                        printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
                }
            }
        }
    }


    return 0;
}
