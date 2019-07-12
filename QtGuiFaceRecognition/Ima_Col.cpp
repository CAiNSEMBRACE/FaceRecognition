#include "Ima_Col.h"
Ima_Col::Ima_Col() {
}

int Ima_Col::show() {
	VideoCapture capture;
	capture.open(0); //从摄像头读入视频 0表示从摄像头读入  

	if (!capture.isOpened())
	{
		cout << "can not open";
		cin.get();
		return -1;
	}

	//    namedWindow(name);

	while (1)
	{
		Mat cap;
		capture >> cap;
		if (!cap.empty()) //判断当前帧是否捕捉成功 **这步很重要  
			imshow("Image Collection", cap);
		else
		{
			cout << "can not open";
			continue;
		}
		if (waitKey(3) == 'q')
			break; //延时30毫秒  
	}
	return 0;
}