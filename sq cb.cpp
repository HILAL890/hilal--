#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number "<<endl;
    cin >> n;

    if (n > 0) {
        cout << "Square = " << n * n << endl;
        cout << "Cube = " << n * n * n;
    } else {
        cout << "Invalid number";
    }

    return 0;
}
