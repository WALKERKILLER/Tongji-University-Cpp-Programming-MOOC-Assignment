#include <iostream>
using namespace std;

int main()
{
	//定义变量并初始化
	int x,y,z;
	int min;
	x=y=z=0;
	min=0;

	cout<< "请输入三个整数的值（用空格隔开）：" << endl;	//引导用户输入三个整数
	cin >> x >> y >> z;
	//用条件运算符求出三个数中的最小数
	min=y<x?y:x;	//若y比x小则将y赋值给min，否则min=x
	min=min<z?min:z;	//若min比z小则min值保持不变，否则min=z
	//输出这个最小数
	cout << "这三个整数中最小的是：" << min << endl;

	system("pause");
	return 0;

}