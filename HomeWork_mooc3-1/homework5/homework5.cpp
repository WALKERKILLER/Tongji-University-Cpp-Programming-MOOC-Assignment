#include <iostream>
using namespace std;

int main()
{
	int x,y,r1,r2=0;	//�˴�Ϊ��������˳�ʼ��
	cin >> x >> y;
	if(x==0||y==0)	//�˴��ġ�=����Ϊ��==����ʹ����ȷ�ıȽ������
	{	
		cout << "Input error" << endl;
		system("pause");	//�˴�������������ֹ���������ʹ��δ��ʼ���ı���
		return 1;	//���ؽ�����1˵���������
	}	//�˴�Ϊ�����ϡ�{}��
	else
	{
		if(x>y)
		{
				r1=x/y;
				r2=x%y;
		}	//�˴��޸�ͬ��
		else
		{
			r1=y/x;
			r2=y%x;
		}	//�˴��޸�ͬ��
	}
	
	cout << "�� = " << r1 << " ���� = " << r2 << endl;
	system("pause");
	return 0;

}