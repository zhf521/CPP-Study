#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "Person构造函数的调用" << endl;
    }
    ~Person()
    {
        cout << "Person析构函数的调用" << endl;
    }
};
void test01()
{
    Person p;
}
int main()
{
    test01();
    system("pause");
    return 0;
}