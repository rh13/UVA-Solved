#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[200000],n,i;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            cout<<a[i];
             if(i<n-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
