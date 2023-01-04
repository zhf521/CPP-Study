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

void func(struct st_boy &a)
{
    cout << "姓名:" << a.name << ",年龄:" << a.age << ",体重:" << a.weight << ",性别:" << a.sex << ",帅吗:" << a.cool << endl;
}

int main()
{
    st_boy boy = {"李四", 21, 60.5, 'Y', true};
    func(boy);
    system("pause");
}