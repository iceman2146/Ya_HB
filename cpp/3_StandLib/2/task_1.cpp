/* 
  ???????????????????????????????????????????????????????????????????????????
  ? ����������� �� ����� ������?                                            ?
  ???????????????????????????????????????????????????????????????????????????
  ? �� ���� ������� ������������������ ����� �����. ��� ������� �����      ?
  ? �������� � ��������� ������ ����� YES, ���� ��� ����� �����             ?
  ? ����������� � ������������������, � NO, ���� ��                         ?
  ? �����������.                                                            ?
  ???????????????????????????????????????????????????????????????????????????
  ? ������ �����                                                            ?
  ???????????????????????????????????????????????????????????????????????????
  ? �������� ������ �����. ��� ����� ������ ��������� �� ����� ������ �     ?
  ? ��������� ��������. ������ ����� ����������� �����                      ?
  ? int.                                                                    ?
  ???????????????????????????????????????????????????????????????????????????
  ? ������ ������                                                           ?
  ???????????????????????????????????????????????????????????????????????????
  ? �������� ����� �� ������.                                               ?
  ???????????????????????????????????????????????????????????????????????????
 */
#include <vector>
#include <unordered_set>
#include <iostream>
#include <algorithm>

int main()
{
   std::unordered_set<int> numbers;
    int number;
    while (std::cin >> number) {
        if (numbers.insert(number).second) 
        {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
            //numbers.insert(number);
        }
    }
  return 0;
}