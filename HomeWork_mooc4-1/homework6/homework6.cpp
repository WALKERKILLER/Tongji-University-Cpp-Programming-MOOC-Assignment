#include <iostream>
#include <cmath>    // 包含abs()函数，作用是求绝对值
using namespace std;

int main() 
{

    double a;
    cin >> a;
    double x = a;   // 定义变量x，用于保存迭代值
    double prev;    //定义变量prev，用于保存x旧值
    do 
	{
        prev = x; // 保存旧值
        x = (2.0/3.0)*prev+a/(3.0*prev*prev); // 计算新值
    } 
	while (abs(x - prev)>=0.00001); // 当差值大于等于阈值时继续循环
    cout << x << endl;
    return 0;

}