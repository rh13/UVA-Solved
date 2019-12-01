#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(string x, string y)
{
    string t1 = x + y;
    string t2 = y + x;
    if(t1>t2) return true;
    return false;
}
int main ()
{
    int n;
    string s[50+5];
    while(cin>>n)
    {
        if(n==0)
        break;
        for(int i=0; i<n; i++)
            cin>>s[i];
        sort(s,s+n,cmp);
        for(int i=0; i<n; i++)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}
