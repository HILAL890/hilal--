#include <iostream>
using namespace std;

int a = 10;   // Global variable
int b = 20;   // Global variable

int main() {
    int c = 5;   // Local variable
    int a = 4;
    int multi = a * (b/ c);

    cout << "multi is: " << multi;

    return 0;
}
