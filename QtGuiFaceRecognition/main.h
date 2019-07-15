#pragma once
#ifndef MAIN_H
#define MAIN_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QtDebug>
#include <iostream>
#include <QTimer>
#include <qfile.h>
#include <QGraphicsScene>
#include <time.h>
#include <windows.h>
#include <QString>
#include <QThread>
#include <QMetaType>
#include <QImage>
#include <qthread.h>
#include <sstream>
#include <vector>


using namespace std;

#endif

#ifndef OPENCV_HEAD
#define OPENCV_HEAD

#include "opencv2/opencv.hpp"
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/face/facerec.hpp"
#include "opencv2/face.hpp"

using namespace cv;
using namespace cv::face;
using namespace Error;

#endif // !OPENCV_HEAD

#ifndef EXCHANGE
#define EXCHANGE

QImage MatToQImage(const cv::Mat& mat);
cv::Mat QImageToMat(QImage image);

#endif // !1

