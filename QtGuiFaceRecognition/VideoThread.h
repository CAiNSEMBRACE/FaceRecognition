#pragma once
#ifndef VIDEOTHREAD_H
#define  VIDEOTHREAD_H


#include "main.h"


class VideoThread :
	public QThread
{
private:
	Mat cap;
	QTimer *video_timer;
	VideoCapture *capture;
protected:
	void run();
public:
	VideoThread();
	void vid_ref();
signals:
	 void translate(QImage);
};

#endif // !VIDEOTHREAD_H
