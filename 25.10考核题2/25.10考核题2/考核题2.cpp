//## ��Ŀ 2: �����������Ƚ�
//
//### ��Ŀ����
//��дһ�� Rectangle �࣬��ʾ���Ρ����а������εĳ��Ϳ����ṩ���¹��ܣ�<br / >
//���� > ��������Ƚ��������ε��������������ϴ�ľ��Ρ�<br / >
//�ṩ area() ���������㲢���ؾ��ε������<br / >
//�ṩ display() ������������εĳ�����������<br / >
//
//### ���������
//�����������εĳ��Ϳ�<br / >
//�������ϴ�ľ��εĳ��Ϳ�<br / >
#include <iostream>
using namespace std;
class Rectangle
{
public:
	Rectangle(int length,int width)
	{
		this->m_Length = length;
		this->m_Width = width;
	}
	int area()
	{
		return m_Length * m_Width;
	}
	void display()
	{
		cout << "����ϴ�ľ��εĳ�Ϊ��" << this->m_Length<< endl;
		cout << "����ϴ�ľ��εĿ�Ϊ��" << this->m_Width << endl;
		cout << "����ϴ�ľ������Ϊ��" << this->area() << endl;
	}
	bool operator>(Rectangle &r)
	{
		return this->area() > r.area();
	}
	Rectangle& Max(Rectangle& r)
	{
		if (*this > r)
		{
			return *this;
		}
		else
		{
			return r;
		}
	}
	int m_Length;
	int m_Width;

};
int main()
{
	int a;
	int b;
	int c;
	int d;
	cout << "�������һ�����γ�" << endl;
	cin >> a;
	cout << "�������һ�����ο�" << endl;
	cin >> b;
	Rectangle r1(a,b);
	cout << "������ڶ������γ�" << endl;
	cin >> c;
	cout << "������ڶ������ο�" << endl;
	cin >> d;
	Rectangle r2(c,d);
	Rectangle r=r1.Max(r2);
	r.display();
	system("pause");
	return 0;
}