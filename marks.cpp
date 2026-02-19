#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3;
    int total;
    float average;

    cout << "Enter marks of 1st subject "<<endl;
    cin >> m1;

    cout << "Enter marks of 2nd subject "<<endl;
    cin >> m2;

    cout << "Enter marks of 3rd subject "<<endl;
    cin >> m3;

    if (m1 >= 0 && m2 >= 0 && m3 >= 0) {
        total = m1 + m2 + m3;
        average = total / 3.0;

        cout << "Total Marks = " << total << endl;
        cout << "Average Marks = " << average;
    } else {
        cout << "Invalid marks entered";
    }

    return 0;
}
