#pragma once
#include <iostream>
#include <time.h>
#include<windows.h>
using namespace std;

time_t GetTimeBySec() {
	time_t timer = time(NULL);
	return timer;
}
//����
void GetTime() {
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	cout << sys.wYear << "��" << sys.wMonth << "��" << sys.wDay << "��" << sys.wHour << ":" << sys.wMinute << ":" << sys.wSecond << endl;
}
//����
void GetTimeByYMD(int a) {
	struct tm* date;
	time_t  time = a;
	date = localtime(&time);
	cout << asctime(date);
}