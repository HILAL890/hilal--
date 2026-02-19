#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
	int a = 54;
	float b=9.8;
	int sum = a + (int) b;
   
	cout<<"enter value of int"<<a<<endl;
	cout<<"enter value of float"<<b<<endl;
	cout<<"type of b"<<typeid(b).name()<<endl;
	cout<<"sum ="<<sum<<endl;
	
}
