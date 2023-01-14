#include <iostream>

using namespace std;

class CBoy // 定义CBoy类
{
public:
    string m_name;                    // 姓名属性
    int m_age;                        // 年龄属性
    CBoy(const string &name, int age) // 两个参数的普通构造函数
    {
        m_name = name;
        m_age = age;
    }
    void show() const // 自我介绍
    {
        cout << "我是:" << m_name << ",我年龄最大!" << endl;
    }
    const CBoy &PkAge(const CBoy &boy) const // 比较年龄，返回值类型是CBoy类的常引用
    {
        if (boy.m_age > m_age) // 如果传进来的年龄更大
            return boy;
        else
            return *this;
    }
};

int main()
{
    // 比较5个男孩的年龄，然后年龄最大的男孩做自我介绍
    CBoy boy1("张三", 3), boy2("李四", 4), boy3("王五", 5), boy4("赵六", 6), boy5("老八", 8);
    const CBoy &boy = boy1.PkAge(boy2).PkAge(boy3).PkAge(boy4).PkAge(boy5);
    boy.show();
    system("pause");
}
