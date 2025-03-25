#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double a,b,c=0; //定义三个double型变量a,b,c，用来存储一元二次方程的系数
	double delta=0;	//定义一个double型变量delta，用来存储一元二次方程的判别式
	double x1,x2=0;	//定义两个double型变量x1,x2，用来存储一元二次方程的两个实根
	cout << "请输入一元二次方程的系数a,b,c(用空格隔开)：" << endl; //提示用户输入一元二次方程的系数
	cin >> a >> b >> c; //接收用户输入的一元二次方程的系数
	if(a==0) //判断a等于0来判断是否是二次方程
	{
		cout << "a不能为0" << endl; //输出a不能为0
		return 1; //程序结束
	}
	else 
	{
		delta=pow(b,2)-4*a*c; //计算一元二次方程的判别式
		if(delta>0) //如果判别式大于0
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a); //计算两个实根
			cout << "两个实根分别为：" << x1 << "," << x2 << endl;
		}
		else if(delta==0) //如果判别式等于0
		{	
			x1=x2=-b/(a*2); //计算两个相等实根
			cout << "两相等实根的值为：" << x1 << endl;
		}
		else  //如果判别式小于0
			cout << "一元二次方程不存在实根"  << endl;
	}

	return 0;

}