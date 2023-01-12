#include <iostream>  // 包含头文件
using namespace std; // 指定缺省的命名空间

class A // 基类
{
public:
    int m_a = 10;
    void func()
    {
        cout << "调用了A的func()函数。\n";
    }
};

class B : public A // 子类
{
public:
    int m_a = 20;
    void func()
    {
        cout << "调用了B的func()函数。\n";
    }
};

class C : public B // 孙类
{
public:
    int m_a = 30;
    void func()
    {
        cout << "调用了C的func()函数。\n";
    }
    void show()
    {
        cout << "C::m_a的值是：" << C::m_a << endl;
        cout << "B::m_a的值是：" << B::m_a << endl;
        cout << "A::m_a的值是：" << B::A::m_a << endl;
    }
};

int main()
{
    C c;
    cout << "C::m_a的值是：" << c.C::m_a << endl;
    cout << "B::m_a的值是：" << c.B::m_a << endl;
    cout << "A::m_a的值是：" << c.B::A::m_a << endl;
    c.C::func();
    c.B::func();
    c.B::A::func();
    system("pause");
    return 0;
}