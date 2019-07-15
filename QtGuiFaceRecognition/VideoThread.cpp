#include "VideoThread.h"
VideoThread::VideoThread() {
}

void VideoThread::run() {
	capture = new VideoCapture(0);
	video_timer = new QTimer;
	connect(video_timer, &QTimer::timeout, this, &VideoThread::vid_ref);
	video_timer->start(30);
	this->exec();
}

void VideoThread::translate(QImage) {

}

void VideoThread::vid_ref() {
	//imwrite("test1.jpg", frame.value);
	capture->read(cap);

	emit translate(MatToQImage(cap));
}
