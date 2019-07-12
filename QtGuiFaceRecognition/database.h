#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<QString>

using namespace std;

class DataBase_s {
public:
	void createConnection();
	void createTable();
	void insert(int a, QString b, int c, int d);
	void show();
	string select(int a);
	void update(int a,int b);
	int select_time(int a);
	void signin();
};

#endif // STUDENT_H
