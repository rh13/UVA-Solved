#include<iostream>
using namespace std;
int main()
{
    long int n;
    while(cin>>n)
    {
        if(n<0)
            break;
        if (n==1)
            cout<<"0%"<<endl;
        else cout<<n*25<<"%"<<endl;


    }


}
