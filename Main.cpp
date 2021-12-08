#include "StringConvector.h"





const std::wstring ex = L"Exit";

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, ".1251");
	std::cout << "—лово Exit завершит работу программы" << std::endl;;
	std::wstring buffer;
	while (true)
	{
		
		std::cout << "¬ведите строку:";
		std::getline(std::wcin, buffer);
		if (buffer == ex)
			break;
		std::wcout << buffer << std::endl;
		StringConvector sc(buffer);
		sc.Convector();
	}
	return 0;

}