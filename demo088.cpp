#include <iostream>
using namespace std;
// 普通函数调用时可以发生自动类型转换（隐式类型转换）
int myAdd(int a, int b)
{
    return a + b;
}
// 函数模板
template <class T>
T myAdd02(T a, T b)
{
    return a + b;
}
void test()
{
    char a = 'a'; // a的ASCII码为97
    int b = 10;
    cout << myAdd(a, b) << endl;

    // 自动类型推导，会报错
    // cout << myAdd02(a, b) << endl;//会报错
    // 显示指定类型
    cout << myAdd02<int>(a, b) << endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}