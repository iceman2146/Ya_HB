#include <iostream>
#include <map>
#include <string>
int main()
{
	std::map<std::string, int> data;
	std::string key;
	int value;
	while (std::cin >> key >> value)
	{
		data[key] = value;  // вставка
	}
	data.erase("hello"); 
	 // удаление
	for (const auto& [key, value] : data) 
	{
	std::cout << key << ": " << value << "\n";
	}
	 // поиск
	 if (auto iter = data.find("test");iter != data.end())
	{
		std::cout << "Found the key " 
					<< iter->first 
					<< " with the value " 
					<< iter->second << "\n";
    } 
    else
    {
	    std::cout << "Not found\n";
	}
}