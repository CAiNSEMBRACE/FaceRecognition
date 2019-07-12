#include "Fac_Rec.h"
Fac_Rec::Fac_Rec() {
	cascade.load("haarcascade_frontalface_alt2.xml");
	model = FisherFaceRecognizer::create();
	model->read("MyFaceFisherModel.xml");
}

int Fac_Rec::fac_pre(Mat image) {
	Mat face_test;
	int predict = 0;
	//��ȡ��ROI�����ߴ����
	if (image.rows >= 120)
	{
		//�ı�ͼ���С��ʹ��˫���Բ�ֵ
		resize(image, face_test, Size(92, 112));

	}
	//�ж��Ƿ���ȷ���ROI
	if (!face_test.empty())
	{
		//����ͼ��Ӧ���ǻҶ�ͼ  
		predict = model->predict(face_test);
	}
	cout << predict << endl;
	return predict;
}

int Fac_Rec::fac_rec(Mat image) {
	Mat gray;

	vector<Rect> faces(0);//�������ڴ����������������

	cvtColor(image, gray, COLOR_RGB2GRAY);//����ͼ�����Ϊ�Ҷ�ͼ

	equalizeHist(gray, gray); //�任���ͼ�����ֱ��ͼ��ֵ������  
	//�������
	cascade.detectMultiScale(gray, faces, 1.1, 4,  CASCADE_DO_ROUGH_SEARCH, Size(30, 30), Size(500, 500));
	Mat* pImage_roi = new Mat[faces.size()];    //��������
	Mat face;
	Point text_lb;//�ı�д�ڵ�λ��
	//�������
	string str;
	map<int, int> predict;
	for (int i = 0; i < faces.size(); i++)
	{
		pImage_roi[i] = gray(faces[i]); //�����е�������������
		text_lb = Point(faces[i].x, faces[i].y);
		if (pImage_roi[i].empty())
			continue;
		int data = fac_pre(pImage_roi[i]);
		if (predict.find(data) == predict.end()){
			predict.insert(pair<int, int>(data, 0));
		}
		else {
			predict.insert(pair<int, int>(data, predict[data] + 1));
		}
	}
	int result = 0, frequency  = 0;
	map<int, int>::iterator iter;
	iter = predict.begin();
	while (iter != predict.end()) {
		if (iter->second > frequency) {
			result = iter->first;
		}
		iter++;
	}
	return result;
}