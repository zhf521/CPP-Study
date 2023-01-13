#include <iostream>
using namespace std;
// 多态
class Animal // 动物类
{
public:
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};
class Cat : public Animal // 猫类
{
public:
    void speak()
    {
        cout << "小猫在说话" << endl;
    }
};
class Dog : public Animal // 狗类
{
public:
    void speak()
    {
        cout << "小狗在说话" << endl;
    }
};

void doSpeak(Animal &animal) // 执行说话的函数
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}
int main()
{
    test01();
    system("pause");
    return 0;
}