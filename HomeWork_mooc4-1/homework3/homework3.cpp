#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	int num,sum=0;
	cout << "��λˮ�ɻ����У�" << '\n';
	for(num=100;num<=999;num++)	//����һ������λ���������ѭ��
	{
		sum=pow(num/100,3)+pow(num%10,3)+pow((num%100-num%10)/10,3);	//�������λ����������
		if(sum==num)	//�ж��Ƿ����ˮ�ɻ�������
		{
			cout << num << '\t';	//�������������ˮ�ɻ���
		}
	}
	cout << endl;
	return 0;

}