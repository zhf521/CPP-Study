#include <iostream>

using namespace std;

// 若不使用const修饰,代码将无法运行
void SendMessage(const int &number, const string &str) // 传引用
{
    cout << "亲爱的" << number << "号:" << str << endl;
}
int main()
{
    SendMessage(16, "I Love You!"); // 传引用
    system("pause");
}