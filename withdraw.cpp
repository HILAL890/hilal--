#include <iostream>
using namespace std;

int main() {
    int balance, withdraw;

    cout << "Enter account balance "<<endl;
    cin >> balance;

    cout << "Enter withdrawal amount "<<endl;
    cin >> withdraw;

    if (withdraw <= balance) {
        cout << "Transaction Successful";
    } //else {
       // cout << "Insufficient Balance";
   // }

    return 0;
}
