#include <iostream>
#include <cstring>
using namespace std;

struct st_boy
{
    string name;
    int age;
    double weight;
    char sex;
    bool cool;
};

int main()
{
    st_boy boys[3];
    memset(boys, 0, sizeof(boys));
    // 第一种赋值方法
    boys[0].name = "张三";
    boys[0].age = 21;
    boys[0].weight = 65.5;
    boys[0].sex = 'Y';
    boys[0].cool = true;
    // 第二种赋值方法
    boys[1].name = "李四";
    boys[1].age = 22;
    boys[1].weight = 66.6;
    boys[1].sex = 'Y';
    boys[1].cool = true;

    boys[2].name = "王五";
    boys[2].age = 23;
    boys[2].weight = 67.5;
    boys[2].sex = 'Y';
    boys[2].cool = true;

    for (int i = 0; i < 3; i++)
    {
        cout << "姓名:" << boys[i].name << ",年龄:" << boys[i].age << ",体重:" << boys[i].weight << ",性别:" << boys[i].sex << ",帅吗:" << boys[i].cool << endl;
    }
    system("pause");
}
