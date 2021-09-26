#ifdef _WIN32
#define OS_TYPE_WINDOWS_CC
#else
#define OS_TYPE_LINUX_CC
#endif

#include "consoleHelper.h"

#include <iostream>

int main()
{
	std::wcout << ch::ConsoleColor::Green << "[MSG]" << ch::ConsoleColor::White << " Test message." << std::endl;
	std::wcout << ch::ConsoleBackgroundColor::Yellow << "[WARN]" << ch::ConsoleColor::White << " Test message." << std::endl;
	std::wcout << ch::ConsoleColor::Red << "[ERR]" << ch::ConsoleColor::White << " Test message." << std::endl;

	std::system("pause");
	return 0;
}