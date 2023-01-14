#include <iostream>
using namespace std;

const int &func2(int &ra) // 返回的是引用
{
    ra++;
    cout << "ra的地址是：" << &ra << "，ra=" << ra << endl;
    return ra;
}

int main()
{
    int a = 3;
    const int &b = func2(a); // 返回的是引用

    cout << " a的地址是：" << &a << "， a=" << a << endl;
    cout << " b的地址是：" << &b << "， b=" << b << endl;
    system("pause");
}
