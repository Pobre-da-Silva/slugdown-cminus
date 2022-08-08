#include <thread>
#include <chrono>
#include "include/slugdown.hpp"

namespace Slugdown {
	static uint32_t slugdownTime = 200;

	void setSlugdownTime(const uint32_t time) {
		slugdownTime = time;
	}

	uint32_t getSlugdownTime() {
		return slugdownTime;
	}

	void slugdown(const std::function<void(void)> activity) {
		std::this_thread::sleep_for(std::chrono::milliseconds(slugdownTime));
		activity();
	}
}
