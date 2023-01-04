#include <iostream>
using namespace std;

struct st_pet
{
    string name;
    string type;
};
struct st_boy
{
    string name;       // 姓名
    int age;           // 年龄
    double weight;     // 体重
    char sex;          // 性别
    bool cool;         // 帅不帅
    struct st_pet pet; // 宠物
};

int main()
{
    st_boy boy = {"张三", 22, 50.5, 'X', true, {"球球", "狗"}};
    cout << "姓名:" << boy.name << "的宠物是一只" << boy.pet.type << "名字叫做:" << boy.pet.name << endl;
    system("pause");
}