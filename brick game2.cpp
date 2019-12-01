#include<iostream>
using namespace std;
int main()
{
    int t,n,i,a[11],c=0;;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        c++;
        cout<<"Case "<<c<<": "<<a[n/2]<<endl;
    }
    return 0;
}

