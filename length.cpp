#include<iostream>
using namespace std;
int main(){
	float length , width ,area, perimeter;
	cout<<"enter length"<<endl;
	cin>>length;
	cout<<"enter width"<<endl;
	cin>>width;
	if(length > 0 && width > 0){
	area = length * width;
	perimeter = 2 * (length + width);
	cout<<"area ="<<area<<endl;
	cout<<"perimeter ="<<perimeter<<endl;
}

} 
