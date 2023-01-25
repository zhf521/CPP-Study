#include <iostream>
using namespace std;
class Person
{
public:
    Person(int age)
    {
        // this指针指向被调用的成员函数所属对象
        this->age = age;
    }
    int age;
};
int main()
{
    Person p1(18);
    cout << "p1的年龄为:" << p1.age << endl;
    system("pause");
    return 0;
}