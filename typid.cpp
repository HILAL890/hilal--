#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	int a = 10;
	cout<<"type of a"<<typeid(a).name()<<endl;
}
