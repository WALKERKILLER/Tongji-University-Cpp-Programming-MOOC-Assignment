#include <iostream>
using namespace std;

int main()
{
	//定义变量并且赋值
	double a=1.4;	//定义上底并赋值	
	double b=1.8;	//定义下底并赋值
	double h=0.9;	//定义高并赋值
	double s=(a+b)/2*h;	//计算梯形面积

	cout << "梯形的面积是：" << s << endl;	//输出梯形面积
	system("pause");
	return 0;

}