#ifdef _WIN32
#include <Windows.h>
#elif defined(__linux__)
#include <unistd.h>
#endif

#include "slugdown.h"
#include <iostream>

int main() {
	std::cout << "algo";
	setSlugdownTime(2);
	getSlugdownTime();
	slugdown();
	std::cout << "algo";
}
