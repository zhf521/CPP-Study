#include <iostream>
using namespace std;
class Student
{
public:
    string m_name;
    int m_ID;
    void showName()
    {
        cout << "姓名：" << m_name << ",学号：" << m_ID << endl;
    }
};
int main()
{
    Student s1;
    s1.m_name = "张三";
    s1.m_ID = 123;
    s1.showName();
    system("pause");
    return 0;
}