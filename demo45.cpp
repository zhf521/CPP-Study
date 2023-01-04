#include <iostream>
#include <cstring>
using namespace std;

class CBoy // 男孩类CBoy
{
public:
    string m_name; // 姓名属性
    int m_age;     // 年龄属性

    CBoy(string name, int age) // 两个参数的普通构造函数
    {
        m_name = name;
        m_age = age;
        cout << "调用了CBoy(name,age)构造函数。\n";
    }
    ~CBoy() // 析构函数
    {
        cout << "调用了~CBoy()\n";
    }
    void show() const // 自我介绍的函数
    {
        cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
    }
};

int main()
{
    CBoy boy1("李四", 18);
    boy1.show();
    system("pause");
}
