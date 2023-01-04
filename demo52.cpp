#include <iostream>
using namespace std;

class CBoy
{
    friend ostream &operator<<(ostream &cout, const CBoy &boy);
    string m_name; // 姓名
    int m_score;   // 得分
    int m_height;  // 身高
public:
    CBoy() // 默认构造函数
    {
        m_name = "张三";
        m_score = 100;
        m_height = 170;
    }
    void show()
    {
        cout << "姓名：" << m_name << ",得分：" << m_score << ",评分：" << m_height << endl;
    }
};
ostream &operator<<(ostream &cout, const CBoy &boy)
{
    cout << "姓名：" << boy.m_name << ",得分：" << boy.m_score << ",评分：" << boy.m_height << endl;
    return cout;
}
int main()
{
    CBoy boy1;
    cout << boy1 << endl;
    system("pause");
}