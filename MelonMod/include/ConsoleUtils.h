#pragma once
#include <string>

class ConsoleUtils {
	public:
		static void CreateConsole(const char* title);
		static void Log(const std::string& message);
};