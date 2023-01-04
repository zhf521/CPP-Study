#include <iostream>

using namespace std;

int main()
{
    int *p = 0;
    // 如果对空指针解引用，程序会崩溃
    // cout < "P=" << p << ",*p=" << *p << endl;
    delete p;
    cout << "delete OK.\n";
    system("pause");
}