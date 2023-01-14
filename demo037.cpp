#include <iostream>

using namespace std;

void MySwap(int &a, int &b) // 交换两数的值
{
    int temp = a;
    a = b;
    b = temp;
}

void MySwap(string &a, string &b) // 交换两个字符串变量的值
{
    string temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 3, b = 5;
    MySwap(a, b);
    cout << "a=" << a << ",b=" << b << endl;
    string c = "张三", d = "李四";
    MySwap(c, d);
    cout << "c=" << c << ",d=" << d << endl;
    system("pause");
}