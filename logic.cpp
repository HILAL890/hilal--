#include <iostream>
using namespace std;

int a = 10;   // Global variable
int b = 20;   // Global variable

int main() {
    int a = 5;   // Local variable programe always presence local variable

    int sum = a + b ;

    cout << "Sum is: " << sum;

    return 0;
    /*no dout programe always presence local variable*/
}
