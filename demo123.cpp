#include <iostream>
#include <queue>
using namespace std;
// 队列queue
class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};
void test()
{
    queue<Person> q;
    Person p1("a", 10);
    Person p2("b", 20);
    Person p3("c", 30);
    Person p4("d", 40);
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);
    // 判断只要队列不为空，查看队头，查看队尾，出队
    while (!q.empty())
    {
        cout << "队头的姓名：" << q.front().m_Name << "年龄：" << q.front().m_Age << endl;
        cout << "队尾的姓名：" << q.back().m_Name << "年龄：" << q.back().m_Age << endl;
        q.pop();
    }
    cout << "队列的大小：" << q.size() << endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}