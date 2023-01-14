#include <iostream>
using namespace std;

class CBoy
{
public:
    int m_ID;      // 编号
    string m_name; // 姓名
    int *m_ptr;    // 计划使用堆区内存
    CBoy()         // 构造函数
    {
        m_ptr = nullptr;
    }
    ~CBoy()
    {
        if (m_ptr)
            delete m_ptr;
    }
    void show()
    {
        cout << "编号：" << m_ID << ",姓名：" << m_name << ",m_ptr=" << m_ptr << endl;
    }
    CBoy &operator=(const CBoy &boy)
    {
        if (this == &boy) // 如果是自己给自己赋值
            return *this;
        if (boy.m_ptr == nullptr) // 如果源对象的指针为空，则清空目标对象的内存和指针
        {
            if (m_ptr != nullptr)
            {
                delete m_ptr;
                m_ptr = nullptr;
            }
        }
        else // 如果源对象的指针不为空
        {
            // 如果目标对象的指针为空，先分配内存
            if (m_ptr == nullptr)
                m_ptr = new int;
            // 然后，把源对象内存中的数据复制到目标对象的内存中
            memcpy(m_ptr, boy.m_ptr, sizeof(int));
        }
        m_ID = boy.m_ID;
        m_name = boy.m_name;
        cout << "调用了重载赋值函数。" << endl;
        return *this;
    }
};

int main()
{
    CBoy boy1, boy2;
    boy1.m_ID = 8;
    boy1.m_name = "张三";
    boy1.m_ptr = new int(3);
    boy1.show();
    boy2.show();
    boy2 = boy1;
    boy2.show();
    cout << "*boy1.m_ptr=" << *boy1.m_ptr << ",*boy2.m_ptr=" << *boy2.m_ptr << endl;
    system("pause");
}