#include <iostream>

using namespace std;

int main()
{
    int a;
    char b;
    bool c;
    string d;

    int *pa = &a; // 指针pa指向变量a,pa的基类型是int
    char *pb = &b;
    bool *pc = &c;
    string *pd = &d;

    cout << "变量a的地址是：" << (long long)&a << endl;
    cout << "变量b的地址是：" << (long long)&b << endl;
    cout << "变量c的地址是：" << (long long)&c << endl;
    cout << "变量d的地址是：" << (long long)&d << endl;
    cout << endl;
    cout << "变量a的地址是：" << (long long)pa << endl;
    cout << "变量b的地址是：" << (long long)pb << endl;
    cout << "变量c的地址是：" << (long long)pc << endl;
    cout << "变量d的地址是：" << (long long)pd << endl;

    system("pause");
}