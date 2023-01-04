#include <iostream>

using namespace std;

int main()
{
    int *p;         // 声明一个指针
    p = new int(5); // 申请内存，并且用指针指向这块内存
    cout << "*p=" << *p << endl;
    *p = 8;
    cout << "*p=" << *p << endl;
    delete p;
    system("pause");
}