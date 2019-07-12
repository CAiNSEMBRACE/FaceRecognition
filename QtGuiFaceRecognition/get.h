#pragma once
#include <iostream>
#include <time.h>
#include<windows.h>
using namespace std;

time_t GetTimeBySec() {
	time_t timer = time(NULL);
	return timer;
}
//不用
void GetTime() {
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	cout << sys.wYear << "年" << sys.wMonth << "月" << sys.wDay << "日" << sys.wHour << ":" << sys.wMinute << ":" << sys.wSecond << endl;
}
//不用
void GetTimeByYMD(int a) {
	struct tm* date;
	time_t  time = a;
	date = localtime(&time);
	cout << asctime(date);
}