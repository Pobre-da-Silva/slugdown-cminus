#ifndef SLUGDOWN_H
#define SLUGDOWN_H

#include <functional>
#include <thread>
#include <chrono>

uint32_t slugdownTime = 200;
void setSlugdownTime(uint32_t time) {
	slugdownTime = time;
}
uint32_t getSlugdownTime() {
	return slugdownTime;
}
void slugdown(std::function<void(void)> activity) {
	std::this_thread::sleep_for(std::chrono::milliseconds(slugdownTime));
	activity();
}

#endif
