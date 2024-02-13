/* Шаблонный Print
Вам надо написать функцию Print, которая умеет печатать в
 поток std::cout элементы переданного контейнера через указанную 
 строку-разделитель. Первый аргумент функции — контейнер. 
 Гарантируется, что по этому контейнеру можно проитерироваться 
 с помощью стандартного цикла range-based for, и что элементы контейнера
  можно напечатать в поток std::cout с помощью стандартного оператора <<. Второй аргумент функции — строка-разделитель, которую надо печатать между элементами. В конце необходимо напечатать перевод строки \n.

Пример вызова:

int main() {
    std::vector<int> data = {1, 2, 3, 4};
    Print(data, ", ");  // 1, 2, 3, 4
}
Примечание
В вашем решении должен быть только код функции Print без функции main. Подключите все необходимые для реализации библиотеки. Используйте константные ссылки для получения параметров и при итерации в цикле, чтобы избежать лишних копирований: если этого не сделать, то программа не скомпилируется.

Ограничение памяти
64.0 Мб
Ограничение времени
1 с
Ввод
стандартный ввод или input.txt
Вывод
стандартный вывод или output.txt
 */
#include <vector>
#include <string>
#include <iostream>
template<typename T>
void Print(const std::vector<T> &, const char);

int main()
{
  std::vector<int> int_vec{1,2,3,4};
  std::string str{"SuperString"};
  const char del='*';
  Print(int_vec,del);
  return 0;
}


template<typename T>
void Print(const std::vector<T> &vec, const char decilimeter)
{

  for (auto i = vec.begin(); i != vec.end(); ++i)
  {
    if (i != std::prev(vec.end()))
      std::cout << *i << decilimeter;
    else
      std::cout << *i<<std::endl;
  }
}