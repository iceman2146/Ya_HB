#include <iostream>
#include <map>
#include <string>
#include <windows.h>
int main()
{
	/****************************
	 * АССОЦИАТИВНЫЕ КОНТЕЙНЕРЫ *
	 ****************************/
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	/*******
	 * MAP *
	 *******/
	{
		std::map<std::string, int> cities = {
			{"Moscow", 1147},
			{"Rome", -753},
			{"London", 47},
		};

		std::string name;
		int population;
		// Вставка
		while (std::cin >> name >> population)
		{
			cities[name] = population;
		}
		// Удаление по ключу
		cities.erase("Rome");
		// поиск по ключу
		std::string name_to_find = "London";
		if (auto iter = cities.find(name_to_find); iter != cities.end())
		{
			std::cout << "Город найден по ключу: " << name_to_find;
			std::cout << ", и его население составляет: " << iter->second << std::endl;
			/**********************************************************
			 * "->" РАЗЫМЕНОВЫВАЕТ УКАЗАТЕЛЬ И ОБРАЩАЕТСЯ К ЭЛЕМЕНТУ, *
			 *     "." ЭТО ПРОСТО ОБРАЩЕНИЕ К ЭЛЕМЕНТУ СТРУКТУРЫ.     *
			 * 
			 * 
			 **********************************************************/
		}

		// Вывод
		std::cout << "MAP вывод через рэндж фор" << std::endl;
		for (const auto &[city, year] : cities)
		{
			std::cout << "Город: " << city << " Население: " << year << std::endl;
		}
		///
		std::cout << "MAP вывод через пары" << std::endl;
		for (const std::pair<const std::string, int> &item : cities)
		{
			std::cout << "Город: " << item.first << ": "
					  << " Население: " << item.second << "\n";
		}
	}

	/*****************
	 * UNORDERED MAP *
	 *****************/
	{
		
	}
}