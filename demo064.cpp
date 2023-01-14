#include <iostream>
using namespace std;
class Person
{
public:
    // 构造函数
    Person()
    {
        cout << "Person的无参(默认)构造函数调用" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << "Person的有参构造函数调用" << endl;
    }
    // 拷贝构造函数
    Person(const Person &p)
    {
        // 将传入的对象身上的所有属性，拷贝到自身上
        age = p.age;
        cout << "Person的拷贝构造函数调用" << endl;
    }
    // 析构函数
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }
    int age;
};
// 调用
void test01()
{
    // 括号法
    Person P1;     // 默认构造函数调用
    Person p2(10); // 有参构造函数调用
    Person p3(p2); // 拷贝构造函数调用
    cout << "p2的年龄为:" << p2.age << endl;
    cout << "p3的年龄为:" << p3.age << endl;
    // 显示法
    Person p4;
    Person p5 = Person(10); // 有参构造函数调用
    Person p6 = Person(p2); // 拷贝构造函数调用
    // 隐式转换法
    Person p7 = 10; // 相当于Person p4 = Person(10);
    Person p8 = p7; // 拷贝构造函数
}
int main()
{
    test01();
    system("pause");
    return 0;
}