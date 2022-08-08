#ifndef SLUGDOWN_H
#define SLUGDOWN_H

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <iostream>

using namespace std;

int slugdownTime = 0;
int setSlugdownTime(int time) {
	slugdownTime = time;
	return slugdownTime;
}
int getSlugdownTime() {
    cout << time;
	return slugdownTime;
}
int slugdown() {
	int time = slugdownTime;
#ifdef _WIN32
	Sleep(time);
#else
	sleep(time);
#endif
	return slugdownTime;
}

#endif
