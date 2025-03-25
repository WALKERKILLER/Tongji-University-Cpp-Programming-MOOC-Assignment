#include <iostream>
#include <string>     //引入string用于string类的支持
#include <algorithm>  //引入algorithm用于all_of函数的支持
using namespace std;

//输入验证：确保输入的是三个小写字母的字符串
bool Correct_Input(const string& str) 
{
    if (str.length() != 3) return false;//保证字符串里面只有三个字母
    return all_of(str.begin(), str.end(), [](char c) { return c >= 'a' && c <= 'z'; }); //保证字符串都是小写字母
}

int main()
{
    // 定义输入和输出的字符数组
    char input[4] = {0}; // 多一个位置用于字符串结束符 '\0'
    char encoded[4] = {0};

    // 循环，如果输入错误的内容（不符合三个小写字母的字符串），则提醒重新输入
	while (true) 
	{
		//提醒输入并将输入的内容储存到input中
		cout << "请用小写字母输入一个三个字母的字符串（本题中为fly）：";
		cin >> input;

        if (!Correct_Input(input))	//判断储存在input中的输入内容是否通过输入验证，如果不通过提醒重新输入，如果通过编码并且输出
		{
            cout << "输入错误！请确保输入三个小写字母。\n\n";
            continue;
        } 

        break;
    }

	//对输入字符串里每个字母进行编码
    for(int i = 0; i < 3; ++i) 
    {
		encoded[i] = (input[i] - 'a' + 3) % 26 + 'a'; // 统一处理 a-z的编码规则（对每一位上字母+3-'a'对26取余再从a开始）
    }
	// 输出结果
    cout << "编码后的字符串为：" << encoded << endl;

	system("pause");
    return 0;

}