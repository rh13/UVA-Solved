#include<iostream>
using namespace std;
// for every 2 bottles borrow 1 bottle and return all 3 :D

int main(){
	int i;
	while (cin>>i){
		if (i==0)return 0;
		cout<<i/2<<endl;
	}
}
