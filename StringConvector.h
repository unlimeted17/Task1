#ifndef STRINGCONVECTOR_H
#define STRINGCONVECTOR_H

#include <iostream>
#include <string>
#include <string.h>
#include <locale>
#include <iterator>
#include <Windows.h>
#include <algorithm>
#include <functional>

#define BUFF_SIZE 256

class StringConvector
{
public:
	StringConvector(std::wstring& str);
	~StringConvector();
	bool Convector();
private:
	std::wstring MassivSimvol;
	std::wstring OutputMassiv;
	int IndexMassive = 0;
	std::wstring _str;
	
};



#endif // !STRINGCONVECTOR_H
