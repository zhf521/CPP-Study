#include <iostream>
using namespace std;
int main()
{
    string name;    // 姓名
    int age;        // 年龄
    double weight;  // 体重
    char sex;       // 性别
    bool beautiful; // 颜值(bool类型)

    name = "李四";
    age = 20;
    weight = 50.6;
    sex = 'X';
    beautiful = true;

    cout << "姓名:" << name << ",年龄:" << age << ",体重:" << weight << ",性别:" << sex << ",漂亮吗:" << beautiful << "\n";
    system("pause");
}