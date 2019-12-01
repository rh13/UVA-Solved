#include<iostream>
using namespace std;
int main()
{
    int t,n,a,i,j;
    char c[110];
    while(cin>>t)
        {
    for(j=1;j<=t;j++)
    {
        cin>>n>>c;
        a=0;
        for(i=0;i<n;)
        {
            if(c[i]=='#')
                i++;
            else
            {
                a++;
                i+=3;
            }
        }
        cout<<"case "<<j<<" :"<<a<<endl;

    }
break;
        }
    return 0;
}
