#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int *p = &a;

    cout << "a=" << a << endl;
    cout << "*p=" << *p << endl;

    *p = 8; // 与a=8效果一致

    cout << "a=" << a << endl;
    cout << "*p=" << *p << endl;

    system("pause");
}