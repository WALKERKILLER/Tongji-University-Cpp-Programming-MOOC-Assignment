#include <iostream>
#include <cmath>	//����cmath���Լ���˷�
#define PI 3.141592653589
using namespace std;

int main()
{
	//�����������ʼ��
	double x=0.0;
	double y=0.0;

	cout<< "��������P������꣬������P��������:" << endl;	//��ʾ�û���������
	cin >> x >> y;

	//��ѡ��ṹȷ��P�㷶Χ��Ҫ����Ľ��
	if (pow(x,2)+pow(y,2)>=4.0*PI && pow(x,2)+pow(y,2)<=16.0*PI)	//����P��������Ӱ�����ڵ�����
	{
		cout<< "��Ӱ���ֵ�����ǣ�" << 12*PI << endl;
	}

	else
	{
		cout<< 0 << endl;
	}

	system("pause");
	return 0;

}