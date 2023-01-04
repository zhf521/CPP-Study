#include <iostream>
using namespace std;

void func(int ID, const string &name = "张三", const string &message = "我喜欢你")
{
    cout << "亲爱的" << name << "(" << ID << "):" << message << endl;
}

int main()
{
    func(3, "李四", "我是帅哥");
    func(5);
    system("pause");
}
