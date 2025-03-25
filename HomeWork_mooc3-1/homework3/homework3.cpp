#include <iostream>
using namespace std;

int main()
{
	double x,y,z=0.0;	//定义三个double型变量x,y,z，用来存储用户输入的三个数
	cout << "请输入x,y,z三个数（用空格隔开）：" << endl;	//提示用户输入三个数
	cin >> x >> y >> z;		//接收用户输入的三个数
	double temp=0.0;	//定义一个double型变量temp，用来存储临时变量
	if(x<=y&&x<=z)	//如果x是最小的数
	{
		if(y>=z)	//如果y是最大的数
			temp=y,y=z,z=temp;	//交换y和z
	}

	else	//如果x不是最小的数
	{
		if(y<=z)	//如果y是最小数
		{
			temp=y;
			y=x;
			x=temp;	//交换x和y
			if(y>=z) //如果y是最大数
				temp=y,y=z,z=temp; //交换y和z
		}	
		if(z<=y) 	//如果z是最小数
		{
			temp=z; 
			z=x;
			x=temp; //交换x和z
			if(y>=z) //如果y是最大数
				temp=y,y=z,z=temp; //交换y和z
		}			
	}
	cout << x << "≤" << y << "≤" << z << endl; //输出排序后的结果
	return 0;

}