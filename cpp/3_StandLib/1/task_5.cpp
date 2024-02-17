/* 
  ┌─────────────────────────────────────────────────────────────────────────┐
  │ Ctrl+X, Ctrl+V - 2                                                      │
  ├─────────────────────────────────────────────────────────────────────────┤
  │ Эта задача — продолжение предыдущей задачи Ctrl+X, Ctrl+V. В качестве   │
  │ основы вы можете взять код                                              │
  │ оттуда.                                                                 │
  │ Петя продолжает разработку своего текстового редактора. На этот раз     │
  │ добавилось еще одна операция: - зажать клавишу Shift                    │
  │ (Shift).                                                                │
  │ Операции Up и Down при зажатой клавише Shift выделяют строки в          │
  │ текстовом редакторе. Если курсор находится на строке n, то после        │
  │ операций Shift, Down, Down выделенными окажутся строки n и              │
  │ n+1.                                                                    │
  │ Операция Ctrl+X вырезает выделенные строки из файла в буфер. Операция   │
  │ Ctrl+V копирует строки из буфера, заменяя выделенные строки в           │
  │ файле.                                                                  │
  │ Операции Ctrl+X и Ctrl+V сбрасывают выделение после исполнения и        │
  │ отпускают клавишу Shift. Если при исполнении этих операций в файле не   │
  │ выделена ни одна строка, поведение должно соответствовать предыдущей    │
  │ задаче Ctrl+X,                                                          │
  │ Ctrl+V.                                                                 │
  ├─────────────────────────────────────────────────────────────────────────┤
  │ Формат ввода                                                            │
  │ Программе на вход подаётся набор строк, разделённых переносом строки.   │
  │ Длина каждой строки не превышает 3000 символов. Последняя строка в      │
  │ файле является пустой. Она означает завершение ввода файла. Других      │
  │ пустых строк в файле быть не                                            │
  │ может.                                                                  │
  │ После этого и до окончания ввода программе подаются команды Down, Up,   │
  │ Ctrl+X, Ctrl+V,                                                         │
  │ Shift.                                                                  │
  ├─────────────────────────────────────────────────────────────────────────┤
  │ Формат вывода                                                           │
  │ Выведите получившийся файл построчно.                                   │
  └─────────────────────────────────────────────────────────────────────────┘
 */
#include <iostream>
#include <list>
#include <string>

int main()
{
  std::list<std::string> file;

  while (true)
  {
    std::string line;
    std::getline(std::cin, line);

    if (line.empty())
    {
      break;
    }

    file.push_back(line);
  }

  auto cursor = file.begin();

  std::list<std::string> buffer;

  bool shiftPressed = false;
  int shiftOffset = 0;
  auto shift = file.begin();

  std::string command;
  while (std::cin >> command)
  {
    if (command == "Up")
    {
      if (cursor == file.begin())
      {
        continue;
      }

      --cursor;
      if (!shiftPressed)
      {
        shift = cursor;
      }
      else
      {
        --shiftOffset;
      }
    }
    else if (command == "Down")
    {
      if (cursor == file.end())
      {
        continue;
      }

      ++cursor;
      if (!shiftPressed)
      {
        shift = cursor;
      }
      else
      {
        ++shiftOffset;
      }
    }
    else if (command == "Ctrl+X")
    {
      if (shift == cursor && cursor == file.end())
      {
        continue;
      }

      buffer.clear();

      if (shift == cursor)
      {
        auto toSplice = cursor;
        cursor = std::next(cursor);
        buffer.splice(buffer.begin(), file, toSplice);
      }
      else if (shiftOffset < 0)
      {
        buffer.splice(buffer.begin(), file, cursor, shift);
        cursor = shift;
      }
      else
      {
        buffer.splice(buffer.begin(), file, shift, cursor);
      }

      shiftPressed = false;
      shift = cursor;
      shiftOffset = 0;
    }
    else if (command == "Ctrl+V")
    {
      if (buffer.empty())
      {
        continue;
      }

      if (shiftOffset < 0)
      {
        cursor = file.erase(cursor, shift);
      }
      else if (shiftOffset > 0)
      {
        cursor = file.erase(shift, cursor);
      }

      file.insert(cursor, buffer.begin(), buffer.end());

      shiftPressed = false;
      shift = cursor;
      shiftOffset = 0;
    }
    else if (command == "Shift")
    {
      shiftPressed = true;
    }
  }

  for (const auto &x : file)
  {
    std::cout << x << "\n";
  }
}