#include <iostream>
using namespace std;

int main()
{
	//�����������ʼ��
	int x,y,z;
	int min;
	x=y=z=0;
	min=0;

	cout<< "����������������ֵ���ÿո��������" << endl;	//�����û�������������
	cin >> x >> y >> z;
	//���������������������е���С��
	min=y<x?y:x;	//��y��xС��y��ֵ��min������min=x
	min=min<z?min:z;	//��min��zС��minֵ���ֲ��䣬����min=z
	//��������С��
	cout << "��������������С���ǣ�" << min << endl;

	system("pause");
	return 0;

}