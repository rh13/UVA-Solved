#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int b,s,m[10000],n[10000],i,j=0;
    while(cin>>b>>s)
    {
        if(b==0 && s==0)
            break;

        for(i=0;i<b;i++)
        {
            cin>>m[i];
        }
        for(i=0;i<s;i++)
        {
            cin>>n[i];
        }
        sort(m,m+b);
        if(b<=s)
            cout<<"Case "<<++j<<": 0"<<endl;
        else cout<<"Case "<<++j<<": "<<b-s<<" "<<m[0]<<endl;
    }
    return 0;
}

