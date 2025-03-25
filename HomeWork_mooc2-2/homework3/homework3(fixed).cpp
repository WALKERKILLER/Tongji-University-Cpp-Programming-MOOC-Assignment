#include <iostream>
#include <string>     //����string����string���֧��
#include <algorithm>  //����algorithm����all_of������֧��
using namespace std;

//������֤��ȷ�������������Сд��ĸ���ַ���
bool Correct_Input(const string& str) 
{
    if (str.length() != 3) return false;//��֤�ַ�������ֻ��������ĸ
    return all_of(str.begin(), str.end(), [](char c) { return c >= 'a' && c <= 'z'; }); //��֤�ַ�������Сд��ĸ
}

int main()
{
    // ���������������ַ�����
    char input[4] = {0}; // ��һ��λ�������ַ��������� '\0'
    char encoded[4] = {0};

    // ѭ������������������ݣ�����������Сд��ĸ���ַ���������������������
	while (true) 
	{
		//�������벢����������ݴ��浽input��
		cout << "����Сд��ĸ����һ��������ĸ���ַ�����������Ϊfly����";
		cin >> input;

        if (!Correct_Input(input))	//�жϴ�����input�е����������Ƿ�ͨ��������֤�������ͨ�������������룬���ͨ�����벢�����
		{
            cout << "���������ȷ����������Сд��ĸ��\n\n";
            continue;
        } 

        break;
    }

	//�������ַ�����ÿ����ĸ���б���
    for(int i = 0; i < 3; ++i) 
    {
		encoded[i] = (input[i] - 'a' + 3) % 26 + 'a'; // ͳһ���� a-z�ı�����򣨶�ÿһλ����ĸ+3-'a'��26ȡ���ٴ�a��ʼ��
    }
	// ������
    cout << "�������ַ���Ϊ��" << encoded << endl;

	system("pause");
    return 0;

}