#include <iostream>
using namespace std;

struct st_boy
{
    string name;   // 姓名
    int score[3];  // 分数
    int age;       // 年龄
    double weight; // 体重
    char sex;      // 性别
    bool cool;     // 帅不帅
};

int main()
{
    st_boy boy;
    for (int i = 0; i < 3; i++)
    {
        boy.score[i] = 70 + i;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "boy.score[" << i << "]=" << boy.score[i] << endl;
    }
    system("pause");
}