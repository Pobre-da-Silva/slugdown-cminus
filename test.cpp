#include "slugdown.h"
#include <iostream>

int main() {
	std::cout << "algo" << std::endl;
	setSlugdownTime(2000);
	getSlugdownTime();
	slugdown([]() {
		std::cout << "algo" << std::endl;
	});
}
