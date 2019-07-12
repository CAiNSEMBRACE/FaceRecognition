#pragma once
#include "opencv_head.h"

#define INPUT 10
#define TEST 0

class Ima_Col
{
private:
	VideoCapture capture;
	CascadeClassifier cascada;
public:
	Mat cap;
	Ima_Col();
	//int show(Mat cap);
	Mat ima_col(int flag);
	int sav_tra(Mat face, int index);
	void sav_csv(int lable = 0);
};