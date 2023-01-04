#include <iostream>
using namespace std;
class CBoy // CBoy类
{
private:
    int m_score;  // 成绩
    int m_height; // 身高
public:
    string m_name; // 姓名
    CBoy()         // 默认构造函数
    {
        m_name = "张三";
        m_score = 100;
        m_height = 60;
    }
    void show() // 介绍函数
    {
        cout << "姓名：" << m_name << ",成绩：" << m_score << ",身高：" << m_height << endl;
    }
    CBoy &operator+(int score) // 加分函数
    {
        m_score = m_score + score;
        return *this;
    }
    CBoy &operator-(int score) // 减分函数
    {
        m_score = m_score - score;
        return *this;
    }
};


int main()
{
    CBoy boy1;
    boy1 + 100 - 30 + 20;
    boy1.show();
    system("pause");
}