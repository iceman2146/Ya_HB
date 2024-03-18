#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>
#include <windows.h>
#include <cctype>
#include <chrono>
#include <vector>
bool comparebyValue(const std::pair<std::string,int64_t>& a, const std::pair<std::string,int64_t>& b)
{
    return a.second>b.second;
}
std::string ToLowerCase(const std::string &input)
{
    std::string result;
    std::transform(input.begin(), input.end(), std::back_inserter(result), 
                    [](unsigned char c){ return std::tolower(c); });
    return result;
}
int main()
{

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::fstream File("../Files/Big_Text", std::ios::in);
    if (!File.is_open())
    {
        std::cout << "Директория задана неверно!";
        return 1;
    }
    else
    {
        {
            // long long words_counter(0);
            // std::string word = "sex";
            // std::cout << "Файл открыт!\n";
            // auto begin = std::chrono::steady_clock::now();
            // while (File >> word)
            //     ++words_counter;
            // auto end = std::chrono::steady_clock::now();
            // auto exec_time = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
            // std::cout << "Слово " << word << " найдено: " << words_counter
            //           << " раз, за " << exec_time.count() << " милисекунд\n ";
        }
        {
            
            // std::map<std::string, int64_t> words_to_find = {{"sex", 1}, {"has", 1}, {"man", 1}, {"woman", 1}};
            // std::string t_word;
            // auto begin = std::chrono::steady_clock::now();
            // while (File >> t_word)
            // {
            //     if (words_to_find.find(t_word) != words_to_find.end())
            //     {
            //         ++words_to_find[t_word];
            //     }
            // }
            // auto end = std::chrono::steady_clock::now();
            // auto exec_time = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
            // for (const auto &[name, val] : words_to_find)
            // {
            //     std::cout << "Слово " << name << " найдено: " << val << " раз, за " << exec_time.count() << " милисекунд\n ";
            // }
        }
        {
            std::map<std::string, int64_t> words_count;
            std::vector<std::pair<std::string, int64_t>> words_count_vector;
            long long count_word(0);
            std::string t_word;
            auto begin = std::chrono::steady_clock::now();
            char ch;
            // while (File >> t_word)
            // {
            //     t_word=ToLowerCase(t_word);
            //     ++words_count[t_word];
            //     ++count_word;
            // }

            while(File.get(ch))
            {
                if(std::isalpha(ch))
                {
                    t_word+=std::tolower(ch);

                } else if (!t_word.empty())
                {
                    ++words_count[t_word];
                    ++count_word;
                    
                    t_word.clear();
                }
            }
            
            auto end = std::chrono::steady_clock::now();
            auto exec_time = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

            for(const auto& it:words_count)
            {
                words_count_vector.push_back(it);
            }
            std::sort(words_count_vector.begin(),words_count_vector.end(),comparebyValue);
            std::cout<<"\n Всего слов:"<<count_word<<"\n";
            std::ofstream MyFile("filename.txt");
            //words_count.
            // for (const auto &[name, val] : words_count)
            // {
            //     //std::cout<< "Слово " << name << " найдено: " << val << " раз, за " << exec_time.count() << " милисекунд\n ";
            //     MyFile << name <<"  "<<  val<<"\n";
            // }
            for(const auto& it:words_count_vector)
            {
                 MyFile << it.first <<"  "<<  it.second<<"\n";
            }
            MyFile.close();
            std::cout<<"\nРазмер мапы: "<<sizeof(words_count)/1024;
            std::cout<<"\nРазмер вектора: "<<sizeof(words_count_vector)/1024;
            std::cout<<"\n"<< exec_time.count() << " милисекунд\n ";

        }
    }
    
    //system("pause");
    File.close();
    std::cout << "Файл закрыт!\n";
    return 0;
}