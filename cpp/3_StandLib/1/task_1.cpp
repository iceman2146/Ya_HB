/* 
  ┌────────────────────────────────────────────────────────────────────────────┐
  │ Шаблонный Print                                                            │
  ├────────────────────────────────────────────────────────────────────────────┤
  │ Вам надо написать функцию Print, которая умеет печатать в поток std::cout  │
  │ элементы переданного контейнера через указанную строку-разделитель.        │
  │ Первый аргумент функции — контейнер. Гарантируется, что по этому           │
  │ контейнеру можно проитерироваться с помощью стандартного цикла             │
  │ range-based for, и что элементы контейнера можно напечатать в поток        │
  │ std::cout с помощью стандартного оператора <<. Второй аргумент функции —   │
  │ строка-разделитель, которую надо печатать между элементами. В конце        │
  │ необходимо напечатать перевод строки \n.                                   │
  └────────────────────────────────────────────────────────────────────────────┘
 */

#include <vector>
#include <string>
#include <iterator>
#include <iostream>
template<typename T>
void Print(const T &, std::string);

int main()
{
  std::vector<int> int_vec{1,2,3,4};
  std::string str{"SuperString"};
  std::string del="*";
  Print(int_vec,del);
  Print(str,del);
  return 0;
}


template<typename T>
void Print(const T &vec,std::string decilimeter)
{

  for (auto i = vec.begin(); i != vec.end(); ++i)
  {
    if ( std::next(i)!=std::end(vec))
      std::cout << *i << decilimeter;
    else
      std::cout << *i<<std::endl;
  }
}