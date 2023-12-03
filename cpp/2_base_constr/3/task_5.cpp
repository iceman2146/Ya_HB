#include <iostream>
using namespace std;
int main() {
  int day, day_in_month;
  cin >> day >> day_in_month;
  int dayOfWeek = day;
  for (int i = 1; i < day; ++i) {
    cout << "   ";
  }

  for (int day = 1; day <= day_in_month; ++day) //1 символ числа месяца
  {
    if (day < 10) {
      cout << " ";
    }
    cout << day;

    if (dayOfWeek == 7) {
      cout << endl;
      dayOfWeek = 1;
    } else {
      cout << " ";
      dayOfWeek += 1;
    }
  }

  if (dayOfWeek != 1) {
    cout << endl;
  }
}