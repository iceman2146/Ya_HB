#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
size_t min_size = 8;
size_t max_size = 14;
auto above(int threshold) {

  return [=](int value) { return value >= threshold; };
};
bool check_password(string &pass) {

  size_t counter_lower_case = 0;
  size_t counter_upper_case = 0;
  size_t counter_digits = 0;
  size_t counter_special_symbols = 0;

  if (pass.empty() || pass.size() < min_size || pass.size() > max_size) {
    return false;
  }

  for (size_t i = 0; i < pass.size(); ++i) {
    if (int(pass[i]) > 126 || int(pass[i]) < 33) {
      return false;
    } else if (int(pass[i]) >= 91 && int(pass[i]) <= 122) {
      counter_lower_case++;
    } else if (int(pass[i]) >= 65 && int(pass[i]) <= 90) {
      counter_upper_case++;
    } else if (int(pass[i]) >= 48 && int(pass[i]) <= 57) {
      counter_digits++;
    } else if ((int(pass[i]) >= 33 && int(pass[i]) <= 47) ||
               (int(pass[i]) >= 58 && int(pass[i]) <= 64) ||
               (int(pass[i]) >= 123 && int(pass[i]) <= 126)) {
      counter_special_symbols++;
    }
  }
  vector<size_t> symbol_list = {counter_lower_case, counter_upper_case,
                                counter_digits, counter_special_symbols};
  int ctr = count_if(symbol_list.begin(), symbol_list.end(), above(1));
  if (ctr >= 3) {
    return true;
  }
  return false;
}
int main() {
  string password;
  cin >> password;

  bool answer = check_password(password);

  if (answer) {
    cout << "YES";
  } else
    cout << "NO" << endl;
  return 0;
}