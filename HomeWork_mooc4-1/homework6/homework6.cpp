#include <iostream>
#include <cmath>    // ����abs()�����������������ֵ
using namespace std;

int main() 
{

    double a;
    cin >> a;
    double x = a;   // �������x�����ڱ������ֵ
    double prev;    //�������prev�����ڱ���x��ֵ
    do 
	{
        prev = x; // �����ֵ
        x = (2.0/3.0)*prev+a/(3.0*prev*prev); // ������ֵ
    } 
	while (abs(x - prev)>=0.00001); // ����ֵ���ڵ�����ֵʱ����ѭ��
    cout << x << endl;
    return 0;

}