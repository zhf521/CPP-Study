#include <iostream>
using namespace std;

class CBoy
{
public:
    string m_name; // 姓名
    int m_d;       // 德育
    int m_z;       // 智力
    int m_t;       // 体育

    CBoy(string name, int d, int z, int t) // 四个参数的构造函数
    {
        m_name = name;
        m_d = d;
        m_z = z;
        m_t = t;
    }

    bool operator==(const CBoy &boy) // 相等
    {
        if ((m_d + m_z + m_t) == (boy.m_d + boy.m_z + boy.m_t))
            return true;
        else
            return false;
    }

    bool operator>(const CBoy &boy) // 大于
    {
        if ((m_d + m_z + m_t) > (boy.m_d + boy.m_z + boy.m_t))
            return true;
        else
            return false;
    }

    bool operator<(const CBoy &boy) // 小于
    {
        if ((m_d + m_z + m_t) < (boy.m_d + boy.m_z + boy.m_t))
            return true;
        else
            return false;
    }
};

int main()
{
    CBoy boy1("张三", 1, 5, 3), boy2("李四", 3, 2, 1);
    if (boy1 == boy2)
        cout << "他们得分相同\n";
    else if (boy1 > boy2)
        cout << "张三得分高\n";
    else
        cout << "李四得分高\n";
    system("pause");
}