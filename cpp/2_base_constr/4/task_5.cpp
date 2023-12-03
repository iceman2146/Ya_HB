#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string name;
  getline(cin, name);
  name.erase(remove(name.begin(), name.end(), ' '), name.end());
  string name_reversed = name;
  reverse(name_reversed.begin(), name_reversed.end());
  if (name == name_reversed) {
    cout << "YES";
  } else
    cout << "NO";

  return 0;
}