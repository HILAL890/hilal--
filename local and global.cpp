#include <iostream>
using namespace std;

int a = 10;   // Global variable
int b = 20;   // Global variable

int main() {
    int c = 5;   // Local variable

    int sum = a + b + c;

    cout << "Sum is: " << sum;

    return 0;
}
