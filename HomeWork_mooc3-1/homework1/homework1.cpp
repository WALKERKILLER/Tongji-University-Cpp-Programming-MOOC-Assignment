#include <iostream>  
using namespace std;

int main()  
{  
	double x,y=0.0;
	int count=0; //����һ�����ͱ���count�������洢�ۿ۵Ĵ���
	cout << "��������Ʒ���x��" << endl;	//��ʾ�û�������Ʒ���
	cin >> x;	//�����û��������Ʒ���
	count=(int)(x/1000); //�����ۿ۴���	
	switch(count)	//�����ۿ۴���ѡ���ۿ۷���
	{

		case 0:	//�ۿ۴���Ϊ0ʱ���ۿ�Ϊԭ��
			y=x;
			break;
		case 1:	//�ۿ۴���Ϊ1ʱ���ۿ�Ϊ0.9
			y=0.9*x;
			break;
		case 2:	//�ۿ۴���Ϊ2ʱ���ۿ�Ϊ0.8
			y=0.8*x;
			break; 
		default:	//�ۿ۴������ڵ���3ʱ���ۿ�Ϊ0.7
			y=0.7*x;
			break;
	}
	
	cout << y << endl;	//����ۿۺ�ļ۸�
	return 0;

}