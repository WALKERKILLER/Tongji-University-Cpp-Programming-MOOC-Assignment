#include <iostream>
using namespace std;

int main()
{
	
	double score1,score2,score3;	//�������ſεķ���

	cout << "��ֱ��������ſεĳɼ���";	//��ʾ�û��������
	cin	>> score1 >> score2 >> score3;	//�Ӽ�������ɼ�

	double average_score=(score1+score2+score3)/3;	//���岢�Ҽ���ƽ���ɼ�

	cout.precision(2);	//�޸�������Ϊ��λС��
	cout << fixed << "ƽ���÷��ǣ�" << average_score << endl;	//���ƽ���ɼ�

	system("pause");
	return 0;

}