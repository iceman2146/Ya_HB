#include <iostream>
using namespace std;
int summ_razryad(int chislo) {
  if (chislo < 10) {
    return chislo;
  } else {
    int sum = 0;
    while (chislo) {
      sum += chislo % 10;
      chislo /= 10;
    }
    return sum;
  }
}
int main() {
  int chislo = 0;
  cin >> chislo;
  int result(0);
  result = summ_razryad(chislo);
  cout << result << endl;

  return 0;
}