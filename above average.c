#include<stdio.h>
int main()
{
    int a[1000],j,i,n,s,c,sum;
    float t,avg;
    scanf("%d",&n);
     for(j=0; j<n; j++)
    {
        c=0;
        scanf("%d",&s);
    sum=0;
    for(i=0; i<s; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        avg=(float)sum/s;
       for(i=0; i<s; i++)
        {
        if(a[i]>avg)
            c++;
       }
        t=((float)c/s)*100;
        printf("%.3f%%\n",t);
    }
    return 0;
}
