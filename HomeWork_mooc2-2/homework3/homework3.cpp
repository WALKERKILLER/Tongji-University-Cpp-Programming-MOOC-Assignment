#include <iostream>
using namespace std;

int main()
{
    // 定义输入和输出的字符数组
    char input[4] = {0}; // 多一个位置用于字符串结束符 '\0'
    char encoded[4] = {0};
    // 提示从键盘输入字符串
    cout << "请用小写字母输入一个三个字母的字符串（本题中为fly）：";
    cin >> input;
    // 编码逻辑
    for (int i = 0; i < 3; ++i) {
        if (input[i] >= 'a' && input[i] <= 'z') { // 确保字符是小写字母
            encoded[i] = (input[i] - 'a' + 3) % 26 + 'a'; // 统一处理 a-z的编码规则（对每一位上字母+3-'a'对26取余再从a开始）
        } else {
            encoded[i] = input[i]; // 非小写字母字符保持不变,避免发生错误
        }
    }
	// 输出结果
    cout << "编码后的字符串为：" << encoded << endl;
	system("pause");
    return 0;

}