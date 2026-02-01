// Вывода файла.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	//setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream ifile{ "in.txt" };

	std::string data;

	while (ifile >> data)
	{
		std::cout << data << std::endl;
	}

	ifile.close();

	return 0;
}
