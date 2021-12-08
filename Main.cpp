#include "StringConvector.h"





const std::wstring ex = L"Exit";

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, ".1251");
	std::cout << "����� Exit �������� ������ ���������" << std::endl;;
	std::wstring buffer;
	while (true)
	{
		
		std::cout << "������� ������:";
		std::getline(std::wcin, buffer);
		if (buffer == ex)
			break;
		std::wcout << buffer << std::endl;
		StringConvector sc(buffer);
		sc.Convector();
	}
	return 0;

}