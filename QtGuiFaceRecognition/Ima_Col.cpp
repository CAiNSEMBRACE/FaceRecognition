#include "Ima_Col.h"

Ima_Col::Ima_Col(){
	capture.open(0); //������ͷ������Ƶ 0��ʾ������ͷ����  
	if (!capture.isOpened())
	{
		cout << "can not open";
		cin.get();
		return;
	}
	cascada.load("haarcascade_frontalface_alt2.xml");
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

Mat Ima_Col::ima_col(int flag) {
	int save_num = 0, delay = 0;
	if (flag) {
		while (save_num < flag)
		{
			capture >> cap;
			if (delay > 120) {
				if (sav_tra(cap, save_num + 1)) {
					delay = 120;
				}
				else {
					save_num++;
					delay = 0;
				}
			}
			delay++;
		}
		cout << "shot completed" << endl;
		sav_csv();
	}
	else {
		capture >> cap;
	}
	return cap;
}


int Ima_Col::sav_tra(Mat image, int index) {
	vector<Rect> faces;
	Mat  finalface, face, face_gray;
	cvtColor(image, face_gray, COLOR_BGR2GRAY);//ת�ҶȻ�����������
	cascada.detectMultiScale(face_gray, faces, 1.1, 4, CASCADE_DO_ROUGH_SEARCH, Size(30, 30), Size(500, 500));
	if (faces.size() == 1)
	{
		face = face_gray(faces[0]);//�ڻҶ�ͼ�н�Ȧ��������������ü���
		resize(face, finalface, Size(92, 112));//����Ȥ��sizeΪ92*112
		imwrite("F:\\tianxu8822\\Learn\\Pri_Per_Lab3\\orl_faces\\Train\\train" + to_string(index) + ".jpg", finalface);
		return 0;
	}
	return 1;
}

void Ima_Col::sav_csv(int lable) {
	QFile *file = new QFile("F:\\tianxu8822\\Learn\\Pri_Per_Lab3\\orl_faces\\train.txt");
	if (file->open(QIODevice::WriteOnly))
	{
		for (int i = 1; i <= 10; i++) {
			QString tmp = (QString)"F:\\tianxu8822\\Learn\\Pri_Per_Lab3\\orl_faces\\Train\\train";
			tmp = tmp + QString::number(i) + ".jpg" + " " + QString::number(lable) + "\n";
			file->write(tmp.toUtf8());
		}
	}
	file->close();
}
