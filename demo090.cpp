#include <iostream>
using namespace std;
class Person
{
public:
    Person(string name, int age)
    {
        this->m_name = name;
        this->m_age = age;
    }
    string m_name;
    int m_age;
};
template <class T>
bool myCompare(T &a, T &b)
{
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// 利用具体化Person的版本实现代码，具体化优先调用
template <>
bool myCompare(Person &a, Person &b)
{
    if (a.m_name == b.m_name && a.m_age == b.m_age)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void test01()
{
    int a = 10;
    int b = 20;
    bool ret = myCompare(a, b);
    if (ret)
    {
        cout << "a==b" << endl;
    }
    else
    {
        cout << "a!=b" << endl;
    }
}
void test02()
{
    Person p1("Tom", 10);
    Person p2("Tom", 10);
    bool ret = myCompare(p1, p2);
    if (ret)
    {
        cout << "p1==p2" << endl;
    }
    else
    {
        cout << "p1!=p2" << endl;
    }
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}