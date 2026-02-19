#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	cout<<( n > 0? "number is positive": n < 0? "nuber is nagetive" :"number is zero" );
	
	return 0;
}
