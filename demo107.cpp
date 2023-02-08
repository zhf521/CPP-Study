#include <iostream>
using namespace std;
// 字符串插入和删除
void test()
{
    string str = "hello";
    // 插入
    str.insert(1, "111");
    cout << "str=" << str << endl;
    // 删除
    str.erase(1, 3);
    cout << "str=" << str << endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}