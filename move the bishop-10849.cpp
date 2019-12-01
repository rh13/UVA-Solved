#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int c,t,n,x1,x2,y1,y2,i;
    cin>>c;
    while(c--)
    {
        cin>>t>>n;
        for(i=0; i<t; i++)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if(((x1+y1)%2) != ((x2+y2)%2) || x1>n || x2>n || y1>n || y2>n || x1<1 || x2<1 || y1<1 || y2<1)
                cout <<"no move"<< endl;
            else if((x1==x2) && (y1==y2))
                cout <<"0" << endl;
            else if((x1+y1)== (x2+y2))
                cout <<"1"<< endl;
            else if((abs(x1-x2)) == (abs(y1-y2)))
                cout <<"1"<< endl;
            else
                cout <<"2"<< endl;

        }

    }


    return 0;
}
