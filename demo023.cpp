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

void func(struct st_boy *p)
{
    cout << "姓名:" << p->name << ",年龄:" << p->age << ",体重:" << p->weight << ",性别:" << p->sex << ",帅吗:" << p->cool << endl;
}

int main()
{
    st_boy *boy = new st_boy({"李四", 21, 60.5, 'Y', true});
    func(boy);
    delete boy;
    system("pause");
}