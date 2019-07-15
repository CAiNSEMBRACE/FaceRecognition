#pragma once
#ifndef FAC_REC_H
#define FAC_REC_H


#include "opencv_head.h"
class Fac_Rec
{
private:
	CascadeClassifier cascade;
	Ptr<FaceRecognizer> model;
public:
	Fac_Rec();
	int fac_rec(Mat image);
	int fac_pre(Mat image);
};

#endif // !FAC_REC_H
