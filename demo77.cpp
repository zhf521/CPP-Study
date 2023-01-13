#include <iostream>
using namespace std;
// 纯虚函数和抽象类
class Base
{
public:
    virtual void func() = 0; // 纯虚函数
};
class Son : public Base
{
public:
    void func()
    {
        cout << "如果子类不重写抽象类中的纯虚函数，也将无法实例化对象!" << endl;
    };
};
int main()
{
    Son s;
    s.func();
    // Base b;//如果要实例化对象则会报错，因为抽象类无法实例化对象
    system("pause");
    return 0;
}