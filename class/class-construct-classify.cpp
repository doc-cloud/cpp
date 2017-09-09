#include <iostream>
using namespace std;

class Test2 {
public:
	Test2()  //�޲������캯��
	{
		m_a = 0;
		m_b = 0;
		cout<<"constructor without parameter"<<endl;
	}
	
	Test2(int a)
	{
		m_a = a;
		m_b = 0;
	}

	Test2(int a, int b) //�в������캯��   //3�ַ���
	{
		m_a = a;
		m_b = b;
		cout<<"constructor with parameter"<<endl;
	}

	//��ֵ���캯�� (copy���캯��) //
	Test2(const Test2& obj )
	{
		cout<<"I am constructor" <<endl;
	}
public:
	void printT()
	{
		cout<<"ordinary member function"<<endl;
	}
private:
	int m_a;
	int m_b;
};

void main21()
{
	Test2 t1;  //�����޲������캯��
}

//���� �����в������캯�� 3
void main22()
{
	//1���ŷ� 
	Test2 t1(1, 2);  //���ò������캯��  c++�������Զ��ĵ��ù��캯��
	t1.printT();

	// 2 =�ŷ�
	Test2 t2 = (3, 4, 5, 6, 7); // = c+�ԵȺŷ� ������ǿ  c++�������Զ��ĵ��ù��캯��

	Test2 t3 = 5;

	//3 ֱ�ӵ��ù��캯��  �ֶ��ĵ��ù��캯��
	Test2 t4 = Test2(1, 2);   //�������� (���������ȥ����) ��ש ....//t4����ĳ�ʼ��

	t1 =  t4;  //��t4 copy�� t1  //��ֵ���� 
	//����ĳ�ʼ�� �� ����ĸ�ֵ ��������ͬ�ĸ��� 
}

int main()
{
	main21();
	// main22();
}