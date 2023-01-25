#include <iostream>
using namespace std;
// 函数模板
template <typename T> // 声明一个模板
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    // 利用函数模板交换
    // 第一种，自动类型推导
    mySwap(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    // 第二种，显示制定类型
    mySwap<int>(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    system("pause");
    return 0;
}