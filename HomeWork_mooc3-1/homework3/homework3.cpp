#include <iostream>
using namespace std;

int main()
{
	double x,y,z=0.0;	//��������double�ͱ���x,y,z�������洢�û������������
	cout << "������x,y,z���������ÿո��������" << endl;	//��ʾ�û�����������
	cin >> x >> y >> z;		//�����û������������
	double temp=0.0;	//����һ��double�ͱ���temp�������洢��ʱ����
	if(x<=y&&x<=z)	//���x����С����
	{
		if(y>=z)	//���y��������
			temp=y,y=z,z=temp;	//����y��z
	}

	else	//���x������С����
	{
		if(y<=z)	//���y����С��
		{
			temp=y;
			y=x;
			x=temp;	//����x��y
			if(y>=z) //���y�������
				temp=y,y=z,z=temp; //����y��z
		}	
		if(z<=y) 	//���z����С��
		{
			temp=z; 
			z=x;
			x=temp; //����x��z
			if(y>=z) //���y�������
				temp=y,y=z,z=temp; //����y��z
		}			
	}
	cout << x << "��" << y << "��" << z << endl; //��������Ľ��
	return 0;

}