#include <iostream>
using namespace std;

class Person1
{
public:
    void showPerson1()
    {
        cout << "Person1 show" << endl;
    }
};
class Person2
{
public:
    void showPerson2()
    {
        cout << "Person2 show" << endl;
    }
};
template <class T>
class MyClass
{
public:
    T obj;
    // 类模板中的成员函数
    void func1()
    {
        obj.showPerson1();
    }
    void func2()
    {
        obj.showPerson2();
    }
};
void test()
{
    MyClass<Person1> m;
    m.func1();
}
int main()
{
    test();
    system("pause");
    return 0;
}