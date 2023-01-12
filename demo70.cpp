#include <iostream>  // 包含头文件
using namespace std; // 指定缺省的命名空间

class A // 基类
{
public:
    int m_a;

private:
    int m_b;

public:
    A() : m_a(0), m_b(0) // 基类的默认构造函数,使用初始化列表进行初始化
    {
        cout << "调用了基类的默认构造函数A()。\n";
    }
    A(int a, int b) : m_a(a), m_b(b) // 基类有两个参数的构造函数,使用初始化列表进行初始化
    {
        cout << "调用了基类的构造函数A(int a,int b)。\n";
    }
    A(const A &a) : m_a(a.m_a + 1), m_b(a.m_b + 1) // 基类的拷贝构造函数,使用初始化列表进行初始化
    {
        cout << "调用了基类的拷贝构造函数A(const A &a)。\n";
    }

    // 显示基类A全部的成员。
    void showA()
    {
        cout << "m_a=" << m_a << ",m_b=" << m_b << endl;
    }
};

class B : public A // 派生类
{
public:
    int m_c;
    B() : m_c(0), A() // 派生类的默认构造函数，指明用基类的默认构造函数（不指明也无所谓）
    {
        cout << "调用了派生类的默认构造函数B()。\n";
    }
    B(int a, int b, int c) : A(a, b), m_c(c) // 指明用基类的有两个参数的构造函数
    {
        cout << "调用了派生类的构造函数B(int a,int b,int c)。\n";
    }
    B(const A &a, int c) : A(a), m_c(c) // 指明用基类的拷贝构造函数
    {
        cout << "调用了派生类的构造函数B(const A &a,int c) 。\n";
    }

    // 显示派生类B全部的成员
    void showB()
    {
        cout << "m_c=" << m_c << endl
             << endl;
    }
};

int main()
{
    B b1; // 将调用基类默认的构造函数
    b1.showA();
    b1.showB();

    B b2(1, 2, 3); // 将调用基类有两个参数的构造函数
    b2.showA();
    b2.showB();

    A a(10, 20); // 创建基类对象。
    B b3(a, 30); // 将调用基类的拷贝造函数
    b3.showA();
    b3.showB();
    system("pause");
    return 0;
}