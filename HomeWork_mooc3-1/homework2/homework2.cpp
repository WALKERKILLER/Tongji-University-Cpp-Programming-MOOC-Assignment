#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	//没说是整数，所以定义两个操作数num1，num2数据类型为double并初始化为0.0
	//定义结果result数据类型为double并初始化为0.0
	double num1,num2,result=0.0;
	int error=0;	//定义错误返回值用于错误状态返回
	char op;	//定义运算符op
	cout << "请输入操作数1 运算符op（+、-、*、/） 操作数2 " << endl;	//引导用户输入
	scanf("%lf %c %lf",&num1,&op,&num2);	//输入两个操作数和运算符
	switch(op)	//以运算符建立选择结构
	{
		case '+': 
			result=num1+num2;	
			break;
		case '-': 
			result=num1-num2; 
			break;
		case '*': 
			result=num1*num2; 
			break;
		case '/': 
			if(num2==0.0)	//对除法特别处理，以被除数不为零建立选择
			{
					printf("错误：被除数不为0\n");
				      error=1;	//将错误返回值返回为1
			}
			else
			{  
				result=num1/num2; //若被除数不为零，进行除法运算
			}
			break;
		default:	//对没有参与程序的运算符特别处理，若输入没有或者不支持的运算符，告知错误
            printf("错误：无效的运算符 '%c'\n", op);
			error=1;  //将错误返回值返回为1
			break;
	}
	if(!error) //若没有错误，输出结果
	{
			printf("%lf%c%lf=%1f\n", num1, op, num2, result);	//输出完整的计算表达式和结果
	}

	return 0;

}