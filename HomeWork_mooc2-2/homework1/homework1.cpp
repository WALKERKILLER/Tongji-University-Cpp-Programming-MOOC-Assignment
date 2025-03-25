#include <iostream>
#include <cmath>	//引入cmath库以计算乘方
#define PI 3.141592653589
using namespace std;

int main()
{
	//定义变量并初始化
	double x=0.0;
	double y=0.0;

	cout<< "请先输入P点横坐标，再输入P点纵坐标:" << endl;	//提示用户输入坐标
	cin >> x >> y;

	//用选择结构确定P点范围即要输出的结果
	if (pow(x,2)+pow(y,2)>=4.0*PI && pow(x,2)+pow(y,2)<=16.0*PI)	//给出P点落在阴影区域内的条件
	{
		cout<< "阴影部分的面积是：" << 12*PI << endl;
	}

	else
	{
		cout<< 0 << endl;
	}

	system("pause");
	return 0;

}