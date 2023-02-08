#include <iostream>
using namespace std;
// 字符存取
void test()
{
    string str = "hello";
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << " ";
    }
    cout << endl;
    // 修改字符
    str[0] = 'x';
    cout << "str=" << str << endl;
    str.at(0) = 'a';
    cout << "str=" << str << endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}