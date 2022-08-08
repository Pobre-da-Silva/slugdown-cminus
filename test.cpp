#include <Windows.h>
#include "slugdown.h"
#include <iostream>

int main() {
	std::cout << "algo";
	setSlugdownTime(2000);
	getSlugdownTime();
	slugdown();
	std::cout << "algo";
}
