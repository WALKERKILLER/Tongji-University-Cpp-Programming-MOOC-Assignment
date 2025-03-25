#include <iostream>  
using namespace std;

int main()  
{  
	double x,y=0.0;
	int count=0; //定义一个整型变量count，用来存储折扣的次数
	cout << "请输入商品金额x：" << endl;	//提示用户输入商品金额
	cin >> x;	//接收用户输入的商品金额
	count=(int)(x/1000); //计算折扣次数	
	switch(count)	//根据折扣次数选择折扣方案
	{

		case 0:	//折扣次数为0时，折扣为原价
			y=x;
			break;
		case 1:	//折扣次数为1时，折扣为0.9
			y=0.9*x;
			break;
		case 2:	//折扣次数为2时，折扣为0.8
			y=0.8*x;
			break; 
		default:	//折扣次数大于等于3时，折扣为0.7
			y=0.7*x;
			break;
	}
	
	cout << y << endl;	//输出折扣后的价格
	return 0;

}