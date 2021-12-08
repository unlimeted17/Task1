#include "StringConvector.h"

StringConvector::StringConvector(std::wstring &str):
 _str(str)
{
	//std::cout << _str << std::endl;
}

StringConvector::~StringConvector()
{
	//ZeroMemory(&MassivSimvol, BUFF_SIZE);

}


bool StringConvector::Convector() 
{
	for (std::wstring::iterator it = _str.begin(); it != _str.end(); ++it) {
		
		//char* res = strchr(MassivSimvol, *it);
		size_t res = MassivSimvol.find((char)towlower(*it), 0);
		//size_t res = MassivSimvol.find(std::transform (*it), 0);
		if (res == std::string::npos) {
			OutputMassiv.resize(OutputMassiv.size() + 1);
			OutputMassiv[IndexMassive] = '(';
			//std::cout << "(" << std::endl;
		}
		else {
			OutputMassiv[res] =  ')';
			OutputMassiv.resize(OutputMassiv.size() + 1);
			OutputMassiv[IndexMassive] = ')';
			//std::cout << ")" << std::endl;
		}

		MassivSimvol.resize(MassivSimvol.size() + 1);
		MassivSimvol[IndexMassive] = (char)towlower (*it);
		++IndexMassive;
	}

	std::wcout << "----------------" << std::endl;
	std::wcout << OutputMassiv << std::endl;

	return true;
}

