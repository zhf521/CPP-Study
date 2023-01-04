#include <iostream>

using namespace std;

int main()
{
    int a = 3;   // 声明普通的整型变量
    int &ra = a; // 创建引用ra,ra是a的别名

    cout << "a的地址是:" << &a << ",a的值是:" << a << endl;
    cout << "ra的地址是:" << &ra << ",ra的值是:" << ra << endl;
    ra = 8;
    cout << "a的地址是:" << &a << ",a的值是:" << a << endl;
    cout << "ra的地址是:" << &ra << ",ra的值是:" << ra << endl;

    system("pause");
}