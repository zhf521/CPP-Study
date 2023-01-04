#include <iostream>
using namespace std;

class CBoy;    // 把CBoy类的声明前置
class CTeacher // CTeacher类
{
public:
    void func(const CBoy &boy);
};

class CBoy // CBoy类
{
    friend void CTeacher::func(const CBoy &boy);

public:
    string m_name; // 姓名属性
    CBoy()         // 默认构造函数
    {
        m_name = "张三";
        m_score = 150;
    }
    void showName() // 显示姓名的成员函数
    {
        cout << "姓名：" << m_name << endl;
    }

private:
    int m_score; // 成绩属性
    void showScore() const
    {
        cout << "成绩：" << m_score << endl;
    }
};

void CTeacher::func(const CBoy &boy)
{
    cout << "func()我的学生的成绩是：" << boy.m_score << endl;
}

int main()
{
    CBoy boy1;
    CTeacher teacher1;
    teacher1.func(boy1);
    system("pause");
}