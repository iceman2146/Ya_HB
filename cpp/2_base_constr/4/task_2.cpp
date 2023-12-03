#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string removeDuplicates(const string &str) {
  string result;

  for (size_t i = 0; i < str.length(); i++) {
    // Если текущий символ не совпадает с предыдущим, добавляем его в результат
    if (i == 0 || str[i] != str[i - 1]) {
      result += str[i];
    }
  }

  return result;
}
int main() {
  string str;
  getline(cin, str);
  string str_edited;
  str_edited += str[0];
  for (int i = 1; i < int(str.size()); i++) {
    if (str[i] == 'b' || str[i] == 'f' || str[i] == 'p' || str[i] == 'v')
      str_edited += '1';
    else if (str[i] == 'c' || str[i] == 'g' || str[i] == 'j' || str[i] == 'k' ||
             str[i] == 'q' || str[i] == 's' || str[i] == 'x' || str[i] == 'z')
      str_edited += '2';
    else if (str[i] == 'd' || str[i] == 't')
      str_edited += '3';
    else if (str[i] == 'l')
      str_edited += '4';
    else if (str[i] == 'm' || str[i] == 'n')
      str_edited += '5';
    else if (str[i] == 'r')
      str_edited += '6';
  }
  // while (str_edited.size() < 4) {
  //   str_edited.push_back('0');
  //}
  // str_edited.resize(4);
  string result = removeDuplicates(str_edited);
  while (result.size() < 4) {
    result.push_back('0');
  }
  result.resize(4);

  cout << result;
  return 0;
}