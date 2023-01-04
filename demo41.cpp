#include <iostream>
#include <cstring>
using namespace std;

class CBoy // 男孩类CBoy
{
public:
    string m_name;    // 姓名属性
    int m_age;        // 年龄属性
    char m_memo[301]; // 备注
    CBoy()            // 没有参数的构造函数
    {
        initData();
        cout << "调用了CBoy()构造函数。\n";
    }
    CBoy(string name) // 一个参数（姓名）的构造函数
    {
        initData();
        cout << "调用了CBoy(name)构造函数。\n";
        m_name = name;
    }
    CBoy(int age) // 一个参数（年龄）的构造函数
    {
        initData();
        cout << "调用了CBoy(age)构造函数。\n";
        m_age = age;
    }
    CBoy(string name, int age) // 两个参数的构造函数
    {
        initData();
        cout << "调用了CBoy(name,age)构造函数。\n";
        m_name = name;
        m_age = age;
    }
    void initData()
    {
        m_name.clear();
        m_age = 0;
        memset(m_memo, 0, sizeof(m_memo));
    }
    ~CBoy() // 析构函数
    {
        cout << "调用了~CBoy()\n";
    }
    void show() // 自我介绍的函数
    {
        cout << "姓名：" << m_name << "，年龄：" << m_age << "，备注：" << m_memo << endl;
    }
};

int main()
{
    CBoy *boy = new CBoy("张三", 8); // 创建男孩对象，为成员姓名和年龄设置初始值
    boy->show();                     // 显示自我介绍
    delete boy;
    system("pause");
}
