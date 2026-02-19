#include<iostream>
using namespace std;
int main(){
	int m1 , m2 , m3;
	int totalmarks;
	float average;
	cout<<"enter the marks of m1 "<<endl;
	cin>>m1;
	cout<<"enter the marks of m2"<<endl;
	cin>>m2;
    cout<<"enter the marks of m3"<<endl;
    cin>>m3;
    totalmarks = m1 + m2 +m3 ;
    cout<<"totalmarks ="<<totalmarks<<endl;
    average = totalmarks/3;
    cout<<"average marks ="<<average<<endl;
    if(average >= 80){
    	cout<<"addimision is graunted"<<endl;
	}
	return 0;
}
