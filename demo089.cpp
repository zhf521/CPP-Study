#include <iostream>
using namespace std;
void myPrint(int a, int b)
{
    cout << "调用普通函数" << endl;
}
template<class T>
void myPrint(T a, T b)
{
    cout << "调用模板" << endl;
}
void test01
{
    int a = 10;
    int b = 10;
    myPrint(a, b);
}
int main()
{
    test01();
    system("pause");
    return 0;
}