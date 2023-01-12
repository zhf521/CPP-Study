#include <iostream>  // 包含头文件
using namespace std; // 指定缺省的命名空间

class A // 基类
{
public:
    int m_a = 0;

private:
    int m_b = 0;

public:
    // 显示基类A全部的成员
    void show()
    {
        cout << "A::show() m_a=" << m_a << ",m_b=" << m_b << endl;
    }
    // 设置成员m_b的值
    void setB(int b)
    {
        m_b = b;
    }
};

class B : public A // 派生类
{
public:
    int m_c = 0;
    // 显示派生类B全部的成员
    void show()
    {
        cout << "B::show() m_a=" << m_a << "m_c=" << m_c << endl;
    }
};

int main()
{
    B b;
    A *a = &b;

    b.m_a = 10;
    b.setB(20); // 设置成员m_b的值
    b.m_c = 30;
    b.show(); // 调用的是B类的show()函数

    a->m_a = 11;
    a->setB(22); // 设置成员m_b的值
    // a->m_c = 30;//因为m_c不是A类的成员

    a->show(); // 调用的是A类的show()函数

    system("pause");
    return 0;
}