#include<iostream>
using namespace std;
int main() {
	int num;
	cout<<"enter your num "<<endl;
	cin>>num;
	cout<<( num > 0? "num is positive" : num < 0? "num is nagetive" : "num is zero");
	return 0;
}
