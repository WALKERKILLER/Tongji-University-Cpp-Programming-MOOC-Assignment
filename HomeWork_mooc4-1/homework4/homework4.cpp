#include <iostream>
#include <cstdlib>	// ����rand()���������������������
#include <ctime> // ����timeͷ�ļ���������Ϊ��ʹ��time()����
using namespace std; 

int main()
{

	srand(time(0)); // ��ʼ��������ӣ���ʱ��Ϊ׼
    int a = rand() % 9 + 1; // 1-9��rand() % 9����0-8��+1������1-9
    int b = rand() % 5 + 5; // 5-9��rand() % 5����0-4��+5������5-9
	cout << "��" << "a=" << a << ',' << "b=" << b << "ʱ,";	// ���a��b��ֵ
	int temp=0;	// ��ʱ����������ѭ���������ÿһ��Ӻ͵�ֵ
	int sum=0;
	cout << "Sn=";	// ���Sn=�������ǰ��仰��
	for(int i=1;i<=b;i++)	// ѭ��b��
	{
		temp=temp*10+a;	// ����ÿһ���ֵ
		sum=sum+temp;	// �����ܺ�
		cout << temp;	// ���ÿһ���ֵ
		if (i!=b)	// ����������һ����+
		{
			cout <<	'+';
		}
		else
		{
			cout << '=';	// ��������һ����=
		}
	}
	cout << sum << "��" << endl;	// ������䣨�����ʽ���統a=2,b=5ʱ��Sn=2+22+222+2222+22222=24690����
	return 0;

}