#include <iostream>
#include <cstring>
using namespace std;
// 如果属性中有在堆区开辟的，需要自己提供拷贝构造函数，防止浅拷贝带来的问题
class CBoy // 男孩类CBoy
{
public:
    string m_name; // 姓名属性
    int m_age;     // 年龄属性
    int *m_ptr;    // 指针成员，计划使用堆内存
    CBoy()         // 没有参数的普通构造函数
    {
        m_name.clear();
        m_age = 0;
        m_ptr = nullptr;
        cout << "调用了CBoy()构造函数。\n";
    }
    CBoy(const CBoy &boy) // 默认拷贝构造函数
    {
        m_name = boy.m_name;
        m_age = boy.m_age;
        // m_ptr = boy.m_ptr; // 默认浅拷贝，会报错
        m_ptr = new int;                       // 分配内存
        memcpy(m_ptr, boy.m_ptr, sizeof(int)); // 拷贝数据
        cout << "调用了CBoy(const CBoy&boy)拷贝构造函数。\n";
    }

    ~CBoy() // 析构函数
    {
        delete m_ptr;
        m_ptr = nullptr;
        cout << "调用了~CBoy()\n";
    }
    void show() // 自我介绍的函数
    {
        cout << "姓名：" << m_name << "，年龄：" << m_age << ",m_ptr=" << m_ptr << ",*m_ptr=" << *m_ptr << endl;
    }
};

int main()
{
    CBoy boy1;            // 创建对象boy1
    boy1.m_name = "张三"; // 对boy1赋值
    boy1.m_age = 22;
    boy1.m_ptr = new int(3);
    boy1.show();
    CBoy boy2 = boy1; // 用对象boy1 创建对象boy2,也可写作(CBoy boy2(boy1));
    *boy2.m_ptr = 8;
    boy1.show();
    boy2.show();
    system("pause");
}
