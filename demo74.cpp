#include <iostream>  // 包含头文件
using namespace std; // 指定缺省的命名空间

class A
{
public:
    int m_a = 10;
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class DD : public B, public C
{
};

int main()
{
    DD d;
    // d.B::m_a = 30;
    // d.C::m_a = 80;
    d.m_a = 80;
    cout << "B::m_a的地址是：" << &d.B::m_a << "，值是：" << d.B::m_a << endl;
    cout << "C::m_a的地址是：" << &d.C::m_a << "，值是：" << d.C::m_a << endl;
    system("pause");
}
