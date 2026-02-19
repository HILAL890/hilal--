#include<iostream>
using namespace std;
int main(){
	int num1 , num2;
	cout<<"enter first number"<<endl;
	cin>>num1;
	cout<<"enter second number"<<endl;
	cin>>num2;
	if(num1 == num2*num2){
		cout<<"number2 is the square of num1"<<endl;
	} else{
		cout<<"numbers2 is not the square of num1"<<endl;
	}
	return 0;
}
