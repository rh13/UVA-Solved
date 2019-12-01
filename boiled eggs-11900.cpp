#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,p,q,s[30],i,j,v;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        int r=0;
        cin>>n>>p>>q;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        v=0;
        for(i=0;i<n && i<p;i++)
        {
            r+=s[i];
            if(r>q) break;;
            v++;
        }
        cout<<"Case "<<j<<": "<<v<<endl; ;
    }
    return 0;
}
