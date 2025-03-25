#include <iostream>
#include <cmath>	//引入cmath以使用绝对值函数
using namespace std;

int main() 
{

    long long num;	//由于整数范围，未限定，可能很大，直接定义范围为long long
    cin >> num;

    if (num == 0)	//考虑整数为0的情况，直接输出即可
	{
        cout << 0;
        return 0;
    }

    int sign = num<0?-1:1; // 记录输入整数的符号方便后面使用
    num = abs(num);		//将num转为正整数处理

    long long result=0;	//结果的数据类型和原数字保持一致
    while (num>0) 
	{
        result=result*10+num%10; // 反转数字（拿上次循环叠乘10的幂再加尾数）
        num/=10;	//取num的每一位
    }

    result*=sign; // 还原结果符号
    cout << result << endl;

    return 0;

}