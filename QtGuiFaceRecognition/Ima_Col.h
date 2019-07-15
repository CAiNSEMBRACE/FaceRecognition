#pragma once
#include "opencv_head.h"

#define INPUT 10
#define TEST 0

class Ima_Col
{
private:
	int delay, sav_num;
	//VideoCapture capture;
	CascadeClassifier *cascada;
public:
	Ima_Col();
	~Ima_Col();
	//int show(Mat cap);
	//Mat ima_col(int flag, int lable, Mat cap);
	int sav_tra(Mat face, int index, int num);
	void sav_csv(int lable, int num);
};