#include <iostream>
using namespace std;
//(-1)
int main()
{
  int n(0);
  float result(0.0f);
  cin >> n;
  float sign(1.0f);

  for (int i = 1; i <= n; ++i)
  {
    result += sign / i;
    sign = -sign;
  }

  cout << result << endl;
  return 0;
}