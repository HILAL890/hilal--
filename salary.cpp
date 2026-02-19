#include<iostream>
using namespace std;
int main() {
	float basic_salary ,allowance,total_salary;
	cout<<"enter basic salary"<<endl;
	cin>>basic_salary;
	allowance = 0.20 * basic_salary;
	total_salary = basic_salary + allowance;
	if(basic_salary >= 0){
		cout<<"allowance"<<allowance<<endl;
		cout<<"total_salary"<<total_salary<<endl;
	} else{
		cout<<"invalid salay input . please enter a positive value"<<endl;
	} return 0;
	
	
}
