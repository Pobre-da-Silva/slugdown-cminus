#include "include/slugdown.hpp"
#include <iostream>
#include <array>
#include <string>

int main() {
	if (Slugdown::getSlugdownTime() != 2000) {
		Slugdown::setSlugdownTime(2000);
	}

	std::array<std::string, 12> months = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November",
		"December"
	};

	for (auto month : months) {
		Slugdown::slugdown([&]() {
			std::cout << month << std::endl;
		});
	}

	return EXIT_SUCCESS;
}
