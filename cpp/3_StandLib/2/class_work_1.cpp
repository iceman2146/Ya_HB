#include <iostream>
#include <map>
#include <string>
#include <windows.h>
int main()
{
	/****************************
	 * ������������� ���������� *
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
		// �������
		while (std::cin >> name >> population)
		{
			cities[name] = population;
		}
		// �������� �� �����
		cities.erase("Rome");
		// ����� �� �����
		std::string name_to_find = "London";
		if (auto iter = cities.find(name_to_find); iter != cities.end())
		{
			std::cout << "����� ������ �� �����: " << name_to_find;
			std::cout << ", � ��� ��������� ����������: " << iter->second << std::endl;
			/**********************************************************
			 * "->" �������������� ��������� � ���������� � ��������, *
			 *     "." ��� ������ ��������� � �������� ���������.     *
			 * 
			 * 
			 **********************************************************/
		}

		// �����
		std::cout << "MAP ����� ����� ����� ���" << std::endl;
		for (const auto &[city, year] : cities)
		{
			std::cout << "�����: " << city << " ���������: " << year << std::endl;
		}
		///
		std::cout << "MAP ����� ����� ����" << std::endl;
		for (const std::pair<const std::string, int> &item : cities)
		{
			std::cout << "�����: " << item.first << ": "
					  << " ���������: " << item.second << "\n";
		}
	}

	/*****************
	 * UNORDERED MAP *
	 *****************/
	{
		
	}
}