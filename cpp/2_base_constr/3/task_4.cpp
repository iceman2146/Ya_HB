#include <iostream>
using namespace std;
int main() {
  int month, year;
  cin >> month >> year;
  switch (month) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    cout << "31";
    break;
  case 2:
    if ((year % 400 == 0 || year % 100 != 0) && year % 4 == 0) {
      cout << "29";
    } else {
      cout << "28";
    }
    break;
  default:
    cout << "30";
  }
  cout << endl;
  return 0;
}