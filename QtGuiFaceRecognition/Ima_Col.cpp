#include "Ima_Col.h"

Ima_Col::Ima_Col(){
	//capture.open(0); //������ͷ������Ƶ 0��ʾ������ͷ����  
	//if (!capture.isOpened())
	//{
	//	cout << "can not open";
	//	cin.get();
	//	return;
	//}
	delay = 0;
	sav_num = 0;
	cascada = new CascadeClassifier;
	cascada->load("haarcascade_frontalface_alt2.xml");
}

Ima_Col::~Ima_Col()
{
}

//int Ima_Col::show(Mat cap) {
//	if (!cap.empty()) //�жϵ�ǰ֡�Ƿ�׽�ɹ� **�ⲽ����Ҫ  
//		imshow("Image Collection", cap);
//	else
//	{
//		cout << "can not open";
//		return -1;
//	}
//	//    namedWindow(name);
//	return 0;
//}

//Mat Ima_Col::ima_col(int flag, int lable, Mat cap) {
//	if (flag > 0) {
//		if (sav_num < flag)
//		{
//			if (delay > 120) {
//				if (sav_tra(cap, sav_num + 1)) {
//					delay = 120;
//				}
//				else {
//					sav_num++;
//					delay = 0;
//				}
//			}
//			delay++;
//		}
//	}
//	else {
//		return cap;
//	}
//}


int Ima_Col::sav_tra(Mat image, int index, int num) {
	vector<Rect> faces;
	Mat  finalface, face, face_gray;
	cvtColor(image, face_gray, COLOR_BGR2GRAY);//ת�ҶȻ�����������
	cascada->detectMultiScale(face_gray, faces, 1.1, 4, CASCADE_DO_ROUGH_SEARCH, Size(30, 30), Size(500, 500));
	if (faces.size() == 1)
	{
		face = face_gray(faces[0]);//�ڻҶ�ͼ�н�Ȧ��������������ü���
		resize(face, finalface, Size(92, 112));//����Ȥ��sizeΪ92*112
		imwrite("F:\\tianxu8822\\Learn\\Pri_Per_Lab3\\orl_faces\\Train\\" + to_string(num) + "_" + to_string(index) + ".jpg", finalface);
		return 0;
	}
	return 1;
}

void Ima_Col::sav_csv(int lable, int num) {
	QFile *file = new QFile("F:\\tianxu8822\\Learn\\Pri_Per_Lab3\\orl_faces\\train.txt");
	if (file->open(QIODevice::Append))
	{
		for (int i = 1; i <= 10; i++) {
			QString tmp = (QString)"F:\\tianxu8822\\Learn\\Pri_Per_Lab3\\orl_faces\\Train\\";
			tmp = tmp + QString::number(num) + "_" + QString::number(i) + ".jpg" + " " + QString::number(lable) + "\n";
			file->write(tmp.toUtf8());
		}
	}
	file->close();
	delete cascada;
}
