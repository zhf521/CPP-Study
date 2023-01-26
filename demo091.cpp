#include <iostream>
using namespace std;
template <class NameType, class AgeType>
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
        cout << "name:" << this->m_Name << endl;
        cout << "age:" << this->m_Age << endl;
    }
    NameType m_Name;
    AgeType m_Age;
};
void test()
{
    Person<string, int> p1("张三", 18);
    p1.showPerson();
}
int main()
{
    test();
    system("pause");
    return 0;
}