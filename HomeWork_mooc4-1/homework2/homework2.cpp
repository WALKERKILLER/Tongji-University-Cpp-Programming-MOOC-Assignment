#include <iostream>
#include <cmath>	//����cmath��ʹ�þ���ֵ����
using namespace std;

int main() 
{

    long long num;	//����������Χ��δ�޶������ܴܺ�ֱ�Ӷ��巶ΧΪlong long
    cin >> num;

    if (num == 0)	//��������Ϊ0�������ֱ���������
	{
        cout << 0;
        return 0;
    }

    int sign = num<0?-1:1; // ��¼���������ķ��ŷ������ʹ��
    num = abs(num);		//��numתΪ����������

    long long result=0;	//������������ͺ�ԭ���ֱ���һ��
    while (num>0) 
	{
        result=result*10+num%10; // ��ת���֣����ϴ�ѭ������10�����ټ�β����
        num/=10;	//ȡnum��ÿһλ
    }

    result*=sign; // ��ԭ�������
    cout << result << endl;

    return 0;

}