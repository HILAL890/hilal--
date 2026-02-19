#include <iostream>
using namespace std;

int main() {
  int passwordLength = 5;

  cout << (passwordLength >= 8) << "\n"; // 0 (false), too short
  cout << (passwordLength < 8) << "\n";  // 1 (true), needs more characters

  return 0;
}

