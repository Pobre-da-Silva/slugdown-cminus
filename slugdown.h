#pragma once
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
	Sleep(time);
	return slugdownTime;
}