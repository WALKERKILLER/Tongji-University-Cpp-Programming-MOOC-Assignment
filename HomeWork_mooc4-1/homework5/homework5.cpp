#include <iostream>
using namespace std;

int main()
{

	int den=1;	//�����ĸ����ʼ��Ϊ1
	double sum=0.0;	//����Ͳ���ʼ��Ϊ0.0
	cout << "S=" << '\n';	//���ǰ���
	for(int i=0;den<10000;i++)	//ѭ����������ĸ<10000ʱֹͣ����ԭ�����ȼۣ�
	{
		den+=i;	//ѭ�������ĸ
		sum=sum+1.0/den;	//����Ӻ�
		if(den==1)	//�����ĸ��1��ֱ��ʡ��
			cout << 1;
		else
			cout << 1 << '/' << den;	//���ÿһ������
		if(den<=10000)	//����������һ������'+'��
			cout << '+';
		else
			cout << '=';	//���һ������'='��
	}
	cout << sum << endl;	//����������ʽ��ʽ��
	return 0;

}