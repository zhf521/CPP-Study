#include <iostream>
using namespace std;
class CBoy
{
public:
    string m_name; // 姓名
    int m_rank;    // 排名
    CBoy()         // 默认构造函数
    {
        m_name = "张三";
        m_rank = 5;
    }
    void show() const
    {
        cout << "姓名：" << m_name << ",排名：" << m_rank << endl;
    }
    CBoy &operator++() // 前置
    {
        m_rank++;
        return *this;
    }
    CBoy operator++(int) // 后置
    {
        CBoy temp = *this;
        m_rank++;
        return temp;
    }
};
int main()
{
    CBoy boy1, boy2;
    ++(++(++boy1));
    boy1.show();
    (boy2++)++;
    boy2.show();
    system("pause");
}