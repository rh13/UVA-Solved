#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int T,j,n;
    cin>>T;
    char ch;
    ch=getchar();
    while(T--)
    {
        string s;
        getline(cin,s);
        n=s.size();
        int m=0,a=0,r=0,t=0,i=0,g=0,count=0;
        for( j=0;j<n;j++)
        {
            if(s[j]=='M') m++;
            else if(s[j]=='A') a++;
            else if(s[j]=='R') r++;
            else if(s[j]=='G') g++;
            else if(s[j]=='I') i++;
            else if(s[j]=='T') t++;
        }
        for( j=0;j<n;j++)
        {
            if(a>=3 && r>=2 && m>=1 && g>=1 && i>=1 && t>=1)
           {
               a-=3; r-=2; m-=1;g-=1;i-=1;t-=1;
               count++;
           }
        }
        printf("%d\n",count);
    }
    return 0;
}
