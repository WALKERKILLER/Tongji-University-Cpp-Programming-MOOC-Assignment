#include <iostream>
using namespace std;

int main()
{
    // ���������������ַ�����
    char input[4] = {0}; // ��һ��λ�������ַ��������� '\0'
    char encoded[4] = {0};
    // ��ʾ�Ӽ��������ַ���
    cout << "����Сд��ĸ����һ��������ĸ���ַ�����������Ϊfly����";
    cin >> input;
    // �����߼�
    for (int i = 0; i < 3; ++i) {
        if (input[i] >= 'a' && input[i] <= 'z') { // ȷ���ַ���Сд��ĸ
            encoded[i] = (input[i] - 'a' + 3) % 26 + 'a'; // ͳһ���� a-z�ı�����򣨶�ÿһλ����ĸ+3-'a'��26ȡ���ٴ�a��ʼ��
        } else {
            encoded[i] = input[i]; // ��Сд��ĸ�ַ����ֲ���,���ⷢ������
        }
    }
	// ������
    cout << "�������ַ���Ϊ��" << encoded << endl;
	system("pause");
    return 0;

}