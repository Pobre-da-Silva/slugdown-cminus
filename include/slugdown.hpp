#ifndef SLUGDOWN_HPP
#define SLUGDOWN_HPP

#include <functional>
#include <cstdint>

namespace Slugdown {
	void setSlugdownTime(const uint32_t time);
	uint32_t getSlugdownTime();
	void slugdown(const std::function<void(void)> activity);
}

#endif
