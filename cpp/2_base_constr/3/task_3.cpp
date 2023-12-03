#include <iostream>

using namespace std;

int main() {
  uint64_t year;
  cin>>year;
  if((year%400==0
    ||year%100!=0)
    &&year%4==0)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;

  return 0;
}