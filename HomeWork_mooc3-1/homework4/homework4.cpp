#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double a,b,c=0; //��������double�ͱ���a,b,c�������洢һԪ���η��̵�ϵ��
	double delta=0;	//����һ��double�ͱ���delta�������洢һԪ���η��̵��б�ʽ
	double x1,x2=0;	//��������double�ͱ���x1,x2�������洢һԪ���η��̵�����ʵ��
	cout << "������һԪ���η��̵�ϵ��a,b,c(�ÿո����)��" << endl; //��ʾ�û�����һԪ���η��̵�ϵ��
	cin >> a >> b >> c; //�����û������һԪ���η��̵�ϵ��
	if(a==0) //�ж�a����0���ж��Ƿ��Ƕ��η���
	{
		cout << "a����Ϊ0" << endl; //���a����Ϊ0
		return 1; //�������
	}
	else 
	{
		delta=pow(b,2)-4*a*c; //����һԪ���η��̵��б�ʽ
		if(delta>0) //����б�ʽ����0
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a); //��������ʵ��
			cout << "����ʵ���ֱ�Ϊ��" << x1 << "," << x2 << endl;
		}
		else if(delta==0) //����б�ʽ����0
		{	
			x1=x2=-b/(a*2); //�����������ʵ��
			cout << "�����ʵ����ֵΪ��" << x1 << endl;
		}
		else  //����б�ʽС��0
			cout << "һԪ���η��̲�����ʵ��"  << endl;
	}

	return 0;

}