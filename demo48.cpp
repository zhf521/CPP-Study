#include <iostream>
using namespace std;
class CBoy // CBoy类
{
    friend class CTeacher;

public:
    string m_name; // 姓名属性
    CBoy()         // 默认构造函数
    {
        m_name = "张三";
        m_score = 150;
    }
    void showName() // 显示姓名
    {
        cout << "姓名：" << m_name << endl;
    }

private:
    int m_score;           // 成绩
    void showScore() const // 显示成绩
    {
        cout << "成绩：" << m_score << endl;
    }
};

class CTeacher // CTeacher类
{
public:
    void func(const CBoy &boy)
    {
        cout << "我的学生的姓名是：" << boy.m_name << endl;
        cout << "我的学生的成绩是：" << boy.m_score << endl;
        boy.showScore();
    }
};

int main()
{
    CBoy boy1;
    CTeacher teacher1;
    teacher1.func(boy1);
    system("pause");
}