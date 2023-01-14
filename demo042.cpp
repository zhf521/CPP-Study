#include <iostream>
#include <cstring>
using namespace std;

class CBoy // 男孩类CBoy
{
public:
    string m_name; // 姓名属性
    int m_age;     // 年龄属性
    CBoy()         // 没有参数的普通构造函数
    {
        initData();
        cout << "调用了CBoy()构造函数。\n";
    }
    CBoy(const CBoy &boy)
    {
        m_name = "漂亮的" + boy.m_name;
        m_age = boy.m_age + 1;
        cout << "调用了CBoy(const CBoy&boy)拷贝构造函数。\n";
    }
    void initData()
    {
        m_name.clear();
        m_age = 0;
    }
    ~CBoy() // 析构函数
    {
        cout << "调用了~CBoy()\n";
    }
    void show() // 自我介绍的函数
    {
        cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
    }
};

int main()
{
    CBoy boy1;
    boy1.m_name = "张三";
    boy1.m_age = 22;
    CBoy boy2 = boy1;
    boy2.show();
    system("pause");
}
