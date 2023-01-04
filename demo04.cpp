#include <iostream>

#define MONTH 12
#define PI 3.14159
using namespace std;

int main()
{
    const int day = 7;
    cout << "一年有" << MONTH << "个月"
         << "\n"
         << "一个星期有" << day << "天"
         << "\n"
         << "圆周率是" << PI << "\n";
    system("pause");
}