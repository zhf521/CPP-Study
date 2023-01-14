#include <iostream>
#include <fstream>
using namespace std;
void test01()
{
    ofstream ofs;
    ofs.open("demo081.txt", ios::out);
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;
    ofs.close();
}
int main()
{
    test01();
    system("pause");
    return 0;
}