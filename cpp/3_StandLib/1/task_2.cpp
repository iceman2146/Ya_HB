/* 
  ┌─────────────────────────────────────────────────────────────────────────┐
  │ Проверка работ                                                          │
  ├─────────────────────────────────────────────────────────────────────────┤
  │ В университете проводится письменная контрольная работа. N студентов    │
  │ сдают свои работы в общую стопку, причем некоторые кладут свою работу   │
  │ сверху, а другие (считая, что чем позже их работу проверят, тем лучше)  │
  │ — снизу. Проверяются работы в том порядке, в котором лежат, начиная с   │
  │ верхней. Определите, чья работа будет проверена k-й по                  │
  │ счёту.                                                                  │
  ├─────────────────────────────────────────────────────────────────────────┤
  │ Формат ввода                                                            │
  │ Первая строка содержит одно натуральное число N, не превосходящее       │
  │ 10000, — число  студентов.                                              │
  │ Каждая из последующих N строк содержит фамилию студента — строку из     │
  │ латинских букв длиной от 2 до 10 символов, и через пробел слово top     │
  │ или bottom — положил этот студент свою работу сверху или                │
  │ Следующая строка содержит одно целое число M от 0 до 10000 — для        │
  │ какого числа работ нужно определить их                                  │
  │ автора.                                                                 │
  │ Следующие M строк содержат по одному числу x_i от 1 до N — номер в      │
  │ стопке очередной интересующей нас                                       │
  │ работы.                                                                 │
  ├─────────────────────────────────────────────────────────────────────────┤
  │ Формат вывода                                                           │
  │ Выведите M строк. В i-й строке выведите фамилию студента, чья работа    │
  │ будет проверена x_i -й по                                               │
  │ счёту.                                                                  │
  └─────────────────────────────────────────────────────────────────────────┘
 */
#include <deque>
#include <cstdint>
#include <iostream>
#include <string>
struct student_work
{
  std::string student_name = "none";
  size_t student_id = 0;
};

void get_student_job(std::deque<student_work> &, size_t &);
int main()
{
  size_t students_value;
  std::cin >> students_value;
  std::deque<student_work> jobs_pool;

  get_student_job(jobs_pool, students_value);

  return 0;
}
void get_student_job(std::deque<student_work> &student_list, size_t &value)
{
  std::string job_destination = "top";
  student_work work;
  for (size_t i = 0; i != value; i++)
  {
    work.student_id = i + 1;
    std::cin >> work.student_name >> job_destination;
    if (job_destination == "bottom")
      student_list.push_back(work);
    else if (job_destination == "top")
      student_list.push_front(work);
  }
  size_t max_value_works;
  std::cin >> max_value_works;
  for (size_t i = 0; i < max_value_works; ++i)
  {
    size_t x = 0;
    std::cin >> x;
    std::cout << student_list[x - 1].student_id << "\n";
  }
}