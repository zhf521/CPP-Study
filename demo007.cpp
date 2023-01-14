#include <iostream>

using namespace std;

int main()
{
    int a;
    char b;
    bool c;
    string d;
    cout << "变量a的地址是：" << (long long)&a << endl;
    cout << "变量b的地址是：" << (long long)&b << endl;
    cout << "变量c的地址是：" << (long long)&c << endl;
    cout << "变量d的地址是：" << (long long)&d << endl;
    system("pause");
}