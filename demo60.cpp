#include <iostream>
using namespace std;
class Person
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;

public:
    void func()
    {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123;
    }
};
int main()
{
    Person p1;
    p1.m_Name = "李四";
    system("pause");
    return 0;
}