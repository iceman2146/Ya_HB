/* 
  ┌─────────────────────────────────────────────────────────────────────────┐
  │ Встречалось ли число раньше?                                            │
  ├─────────────────────────────────────────────────────────────────────────┤
  │ На вход подаётся последовательность целых чисел. Для каждого числа      │
  │ выведите в отдельной строке слово YES, если это число ранее             │
  │ встречалось в последовательности, и NO, если не                         │
  │ встречалось.                                                            │
  ├─────────────────────────────────────────────────────────────────────────┤
  │ Формат ввода                                                            │
  ├─────────────────────────────────────────────────────────────────────────┤
  │ Вводится список чисел. Все числа списка находятся на одной строке и     │
  │ разделены пробелом. Каждое число представимо типом                      │
  │ int.                                                                    │
  ├─────────────────────────────────────────────────────────────────────────┤
  │ Формат вывода                                                           │
  ├─────────────────────────────────────────────────────────────────────────┤
  │ Выведите ответ на задачу.                                               │
  └─────────────────────────────────────────────────────────────────────────┘
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