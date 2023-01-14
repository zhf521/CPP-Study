#include <iostream>
using namespace std;
class CBoy // CBoy类
{
public:
    string m_name;    // 姓名属性
    static int m_age; // 年龄属性

    // 两个参数的普通构造函数
    CBoy(const string &name, int age)
    {
        m_name = name;
        m_age = age;
    }
    // 显示姓名
    void showName()
    {
        cout << "姓名：" << m_name << endl;
    }
    // 显示年龄
    static void showAge()
    {
        cout << "年龄：" << m_age << endl;
    }
};
int CBoy::m_age = 8; // 初始化类的静态成员变量
int main()
{
    CBoy::showAge();
    cout << "CBoy::m_age=" << CBoy::m_age << endl;
    CBoy boy1("张三", 21);
    boy1.showName();
    boy1.showAge();
    system("pause");
}