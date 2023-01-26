#include <iostream>
using namespace std;
template <class NameType, class AgeType = int>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    void showPerson()
    {
        cout << "name=" << this->m_Name << endl;
        cout << "age=" << this->m_Age << endl;
    }
    NameType m_Name;
    AgeType m_Age;
};
void test01()
{
    // Person p("张三", 20);//报错
    Person<string, int> p("张三", 20);
    p.showPerson();
}
void test02()
{
    Person<string> p("李四", 21);
    p.showPerson();
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}