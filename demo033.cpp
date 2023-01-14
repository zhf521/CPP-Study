#include <iostream>
using namespace std;

void func1(int **p) // 传地址，实参是指针的地址，形参是二级指针
{
    *p = new int(3); // p是二级指针，存放指针的地址。
    cout << "func1内存的地址是：" << *p << "，内存中的值是：" << **p << endl;
}

void func2(int *&p) // 传引用，实参是指针，形参是指针的别名
{
    p = new int(3); // p是指针的别名。
    cout << "func2内存的地址是：" << p << "，内存中的值是：" << *p << endl;
}

int main()
{
    int *p = nullptr; // 存放在子函数中动态分配内存的地址

    // func1(&p); // 传地址，实参填指针p的地址
    func2(p); // 传引用，实参填指针p

    cout << "main 内存的地址是：" << p << "，内存中的值是：" << *p << endl;

    delete p;

    system("pause");
}
