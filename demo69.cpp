#include <iostream>  // 包含头文件。
using namespace std; // 指定缺省的命名空间。

class A // 基类
{
public:
    int m_a = 10;

protected:
    int m_b = 20;

private:
    int m_c = 30;
};

class B : public A // 派生类
{
public:
    using A::m_b; // 把m_b的权限修改为公有的。
private:
    using A::m_a; // 把m_a的权限修改为私有的。
};

int main()
{
    B b;
    // b.m_a = 11;
    b.m_b = 21;
    // b.m_c = 21;
    system("pause");
}
