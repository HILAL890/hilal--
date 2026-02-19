#include <iostream>
using namespace std;

int main() {
    int hours , rate , pay;

    cout << "Hours worked "<<endl;;
    cin >> hours;

    cout << "Hourly rate "<<endl;;
    cin >> rate;

    if (hours > 0) {
        pay = hours * rate;
        cout << "Total Pay = " << pay;
    } else {
        cout << "Invalid hours";
    }

    return 0;
}
