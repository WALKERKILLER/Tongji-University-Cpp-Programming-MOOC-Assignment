#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	int num,sum=0;
	cout << "三位水仙花数有：" << '\n';
	for(num=100;num<=999;num++)	//建立一个在三位正整数里的循环
	{
		sum=pow(num/100,3)+pow(num%10,3)+pow((num%100-num%10)/10,3);	//计算各个位数的立方和
		if(sum==num)	//判断是否符合水仙花数条件
		{
			cout << num << '\t';	//输出符合条件的水仙花数
		}
	}
	cout << endl;
	return 0;

}