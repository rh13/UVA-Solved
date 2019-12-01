#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,d,r,a[105],b[105],s,sum,c;
    while(1)
    {
        cin>>n>>d>>r;
        if (!n || !d || !r)
            return 0;
    for(i=0;i<n;i++)
        cin>>a[i];

         for(i=0;i<n;i++)
        cin>>b[i];

    sort(a,a+n);
    sort(b,b+n);
     sum=0;
    for(i=0;i<n;i++)
    {
      s=a[i]+b[n-i-1];
      if(s>d)
    sum+=r*(s-d);
    }
    cout<<sum<<endl;
    }
    return 0;
}

