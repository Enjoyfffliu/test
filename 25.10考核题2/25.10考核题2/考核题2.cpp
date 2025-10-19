//## 题目 2: 矩形类的面积比较
//
//### 题目描述
//编写一个 Rectangle 类，表示矩形。类中包含矩形的长和宽，并提供以下功能：<br / >
//重载 > 运算符，比较两个矩形的面积，返回面积较大的矩形。<br / >
//提供 area() 函数，计算并返回矩形的面积。<br / >
//提供 display() 函数，输出矩形的长、宽和面积。<br / >
//
//### 输入输出：
//输入两个矩形的长和宽。<br / >
//输出面积较大的矩形的长和宽。<br / >
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
		cout << "面积较大的矩形的长为：" << this->m_Length<< endl;
		cout << "面积较大的矩形的宽为：" << this->m_Width << endl;
		cout << "面积较大的矩形面积为：" << this->area() << endl;
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
	cout << "请输入第一个矩形长" << endl;
	cin >> a;
	cout << "请输入第一个矩形宽" << endl;
	cin >> b;
	Rectangle r1(a,b);
	cout << "请输入第二个矩形长" << endl;
	cin >> c;
	cout << "请输入第二个矩形宽" << endl;
	cin >> d;
	Rectangle r2(c,d);
	Rectangle r=r1.Max(r2);
	r.display();
	system("pause");
	return 0;
}