#include <iostream>
#include <cstdlib>	// 包含rand()函数，作用是生成随机数
#include <ctime> // 包含time头文件，作用是为了使用time()函数
using namespace std; 

int main()
{

	srand(time(0)); // 初始化随机种子，以时间为准
    int a = rand() % 9 + 1; // 1-9，rand() % 9生成0-8，+1后生成1-9
    int b = rand() % 5 + 5; // 5-9，rand() % 5生成0-4，+5后生成5-9
	cout << "当" << "a=" << a << ',' << "b=" << b << "时,";	// 输出a和b的值
	int temp=0;	// 临时变量，用于循环储存后面每一项加和的值
	int sum=0;
	cout << "Sn=";	// 输出Sn=（结果的前半句话）
	for(int i=1;i<=b;i++)	// 循环b次
	{
		temp=temp*10+a;	// 计算每一项的值
		sum=sum+temp;	// 计算总和
		cout << temp;	// 输出每一项的值
		if (i!=b)	// 如果不是最后一项，输出+
		{
			cout <<	'+';
		}
		else
		{
			cout << '=';	// 如果是最后一项，输出=
		}
	}
	cout << sum << "。" << endl;	// 输出后半句（整句格式形如当a=2,b=5时，Sn=2+22+222+2222+22222=24690。）
	return 0;

}