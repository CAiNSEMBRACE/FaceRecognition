#pragma once
#ifndef DATABASE_H
#define DATABASE_H
#include "main.h"

using namespace std;

class DataBase_s {
public:
	void createConnection();
	void createTable();
	void insert(int a, QString b, int c, int d);
	QString show();
	string select(int a);
	void update(int a,int b);
	QString select_person(int a);
	int GetNum();
	int select_time(int a);
	static time_t GetTimeBySec();
	static void transform(int a, string& b);
};

#endif // STUDENT_H
