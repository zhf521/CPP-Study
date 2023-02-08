#include <iostream>
using namespace std;
// 子串
void test()
{
    string str = "abcdef";
    string subStr = str.substr(1, 3);
    cout << "subStr=" << subStr << endl;
}
// 实用操作
void test01()
{
    string email = "hello@qq.com";
    // 从邮件地址中获取用户信息
    int pos = email.find("@");
    string userName = email.substr(0, pos);
    cout << userName << endl;
}
int main()
{
    test();
    test01();
    system("pause");
    return 0;
}