#include <iostream>
using namespace std;

int main()
{

	int n=0,sum=0;	//��n��sum��ʼ��
	for(n=1;n<=19;n+=2)	//��n�ķ�Χд��for��
		sum=sum+n;
	cout << "sum=" << sum << endl;
	system("pause");
	return 0;

}