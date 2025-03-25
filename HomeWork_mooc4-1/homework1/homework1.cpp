#include <iostream>
using namespace std;

int main()
{

	int n=0,sum=0;	//给n和sum初始化
	for(n=1;n<=19;n+=2)	//将n的范围写到for中
		sum=sum+n;
	cout << "sum=" << sum << endl;
	system("pause");
	return 0;

}