#include<iostream>
#include<iomanip>

using namespace std;
int main(){
	double n = 71.5;
	cout.setf (ios::fixed);	
		cout.setf (ios::showpoint);
		cout.precision(4);
		cout<<"n ="<<n;
}
