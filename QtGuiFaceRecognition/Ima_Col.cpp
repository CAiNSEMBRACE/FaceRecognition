#include "Ima_Col.h"
Ima_Col::Ima_Col() {
}

int Ima_Col::show() {
	VideoCapture capture;
	capture.open(0); //������ͷ������Ƶ 0��ʾ������ͷ����  

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
		if (!cap.empty()) //�жϵ�ǰ֡�Ƿ�׽�ɹ� **�ⲽ����Ҫ  
			imshow("Image Collection", cap);
		else
		{
			cout << "can not open";
			continue;
		}
		if (waitKey(3) == 'q')
			break; //��ʱ30����  
	}
	return 0;
}