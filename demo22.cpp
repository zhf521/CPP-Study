#include <iostream>

using namespace std;

int main()
{
    struct st_boy
    {
        string name = "张三";
        int age = 21;
        double weight = 48.6;
        char sex = 'Y';
        bool cool = true;
    };

    struct st_boy boy; // 在C++中也可以写作 st_boy boy;

    cout << "姓名：" << boy.name << ",年龄:" << boy.age << ",体重:" << boy.weight << ",性别:" << boy.sex << ",帅吗:" << boy.cool << endl;

    system("pause");
}