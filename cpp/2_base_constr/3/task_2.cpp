#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a + b <= c || a + c <= b || b + c <= a) 
  {
    cout << "UNDEFINED\n";
  } 
  else if (a * a + b * b == c * c 
          || a * a + c * c == b * b ||
             b * b + c * c == a * a) 
  {
    cout << "YES\n";
  } else 
  {
    cout << "NO\n";
  }
  return 0;
}