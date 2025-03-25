#include <iostream>
using namespace std;

int main()
{
	int x,y,r1,r2=0;	//此处为变量添加了初始化
	cin >> x >> y;
	if(x==0||y==0)	//此处的“=”改为“==“，使用正确的比较运算符
	{	
		cout << "Input error" << endl;
		system("pause");	//此处在输入错误后终止程序避免了使用未初始化的变量
		return 1;	//返回结束码1说明输入错误
	}	//此处为语句加上”{}“
	else
	{
		if(x>y)
		{
				r1=x/y;
				r2=x%y;
		}	//此处修改同上
		else
		{
			r1=y/x;
			r2=y%x;
		}	//此处修改同上
	}
	
	cout << "商 = " << r1 << " 余数 = " << r2 << endl;
	system("pause");
	return 0;

}