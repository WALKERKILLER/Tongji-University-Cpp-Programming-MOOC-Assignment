#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	//û˵�����������Զ�������������num1��num2��������Ϊdouble����ʼ��Ϊ0.0
	//������result��������Ϊdouble����ʼ��Ϊ0.0
	double num1,num2,result=0.0;
	int error=0;	//������󷵻�ֵ���ڴ���״̬����
	char op;	//���������op
	cout << "�����������1 �����op��+��-��*��/�� ������2 " << endl;	//�����û�����
	scanf("%lf %c %lf",&num1,&op,&num2);	//���������������������
	switch(op)	//�����������ѡ��ṹ
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
			if(num2==0.0)	//�Գ����ر����Ա�������Ϊ�㽨��ѡ��
			{
					printf("���󣺱�������Ϊ0\n");
				      error=1;	//�����󷵻�ֵ����Ϊ1
			}
			else
			{  
				result=num1/num2; //����������Ϊ�㣬���г�������
			}
			break;
		default:	//��û�в�������������ر���������û�л��߲�֧�ֵ����������֪����
            printf("������Ч������� '%c'\n", op);
			error=1;  //�����󷵻�ֵ����Ϊ1
			break;
	}
	if(!error) //��û�д���������
	{
			printf("%lf%c%lf=%1f\n", num1, op, num2, result);	//��������ļ�����ʽ�ͽ��
	}

	return 0;

}