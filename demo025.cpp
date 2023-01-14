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
    struct st_boy boys[2] = {{"张三", 26, 43.8, 'Y', true}, {"李四", 25, 52.8, 'Y', false}};
    for (int i = 0; i < 2; i++)
    {
        cout << "姓名:" << boys[i].name << ",年龄:" << boys[i].age << ",体重:" << boys[i].weight << ",性别:" << boys[i].sex << ",帅吗:" << boys[i].cool << endl;
    }
    system("pause");
}
