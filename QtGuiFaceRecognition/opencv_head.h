#pragma once
#ifndef OPENCV_ALL_H
#define OPENCV_ALL_H

#ifndef ROUTINE_H
#define ROUTINE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

#endif // !

#ifndef OPENCV_H
#define OPENCV_H

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

#ifndef QT_H
#define QT_H

#include <QObject>
#include <QString>
#include <QFile>
#include <QTimer>

#endif // !

#endif // !OPENCV_ALL_HEAD
