#include <iostream>  // 包含头文件
using namespace std; // 指定缺省的命名空间

class A1 // 基类一
{
public:
    int m_a = 10;
};

class A2 // 基类二
{
public:
    int m_a = 20;
};

class B : public A1, public A2 // 派生类
{
public:
    int m_a = 30;
};

int main()
{
    B b;
    cout << " B::m_a的值是：" << b.m_a << endl;
    cout << "A1::m_a的值是：" << b.A1::m_a << endl;
    cout << "A2::m_a的值是：" << b.A2::m_a << endl;
    system("pause");
}
