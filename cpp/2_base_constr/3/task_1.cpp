#include <cmath>
#include <iostream>

using namespace std;
struct coord {
  int x, y;
  coord() : x(0), y(0) {}
};
bool queen_can_move(coord &a, coord &b) {
  if (a.x == b.x || a.y == b.y || abs(a.x - b.x) == abs(a.y - b.y))
    return true;
  else
    return false;
}
int main() {
  coord point_1, point_2;
  cin >> point_1.x >> point_1.y >> point_2.x >> point_2.y;
  bool result=queen_can_move(point_1, point_2);
  if(result) {cout<<"YES"<<endl;} else {cout<<"NO"<<endl;}
  return 0;
}