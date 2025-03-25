#include <iostream>
using namespace std;

int main()
{

	int den=1;	//定义分母并初始化为1
	double sum=0.0;	//定义和并初始化为0.0
	cout << "S=" << '\n';	//输出前半句
	for(int i=0;den<10000;i++)	//循环条件（分母<10000时停止，与原条件等价）
	{
		den+=i;	//循环计算分母
		sum=sum+1.0/den;	//计算加和
		if(den==1)	//如果分母是1，直接省略
			cout << 1;
		else
			cout << 1 << '/' << den;	//输出每一个分数
		if(den<=10000)	//如果不是最后一项后面跟'+'号
			cout << '+';
		else
			cout << '=';	//最后一项后面跟'='号
	}
	cout << sum << endl;	//输出结果（等式形式）
	return 0;

}