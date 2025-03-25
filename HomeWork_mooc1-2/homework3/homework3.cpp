#include <iostream>
using namespace std;

int main()
{
	
	double score1,score2,score3;	//定义三门课的分数

	cout << "请分别输入三门课的成绩：";	//提示用户键入分数
	cin	>> score1 >> score2 >> score3;	//从键盘输入成绩

	double average_score=(score1+score2+score3)/3;	//定义并且计算平均成绩

	cout.precision(2);	//修改输出结果为两位小数
	cout << fixed << "平均得分是：" << average_score << endl;	//输出平均成绩

	system("pause");
	return 0;

}