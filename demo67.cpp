#include <iostream>
using namespace std;
class Person
{
public:
    void showClassName()
    {
        cout << "This is Person class!" << endl;
    }
    void showPersonAge()
    {
        cout << "age=" << m_Age << endl;
    }
    int m_Age;
};
void test01()
{
    Person *p = nullptr;
    p->showClassName();
    // p->showPersonAge();
}
int main()
{
    test01();
    system("pause");
    return 0;
}