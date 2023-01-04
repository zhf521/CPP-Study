#include <iostream>
using namespace std;
class CBoy // 创建男孩类CBoy
{
public:
    string name;
    int age;
    void SetValue(string name1, int age1); // 设置成员变量的值函数
    void Show()                            // 显示自我介绍函数
    {
        cout << "姓名：" << name << "，年龄：" << age << endl;
    }
};
void CBoy::SetValue(string name1, int age1) // 设置成员变量的值函数，可以定义在类外部，使用类名::标识
{
    name = name1;
    age = age1;
}

int main()
{
    CBoy boy;                 // 创建男孩对象
    boy.SetValue("张三", 22); // 设置成员变量的值
    boy.Show();               // 显示自我介绍
    system("pause");
}