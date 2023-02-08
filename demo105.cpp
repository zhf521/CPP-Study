#include <iostream>
using namespace std;
void test()
{
    string str1 = "hello";
    string str2 = "hello";
    if (str1.compare(str2) == 0)
    {
        cout << "str1等于str2" << endl;
    }
    else if (str1.compare(str2) > 0)
    {
        cout << "str1大于str2" << endl;
    }
    else
    {
        cout << "str1小于str2" << endl;
    }
}
int main()
{
    test();
    system("pause");
    return 0;
}