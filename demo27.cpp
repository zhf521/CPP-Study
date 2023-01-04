#include <iostream>
using namespace std;

struct st_boy
{
    string name;                                // 姓名
    int score[2][3] = {11, 12, 13, 21, 22, 23}; // 分数
    int age;                                    // 年龄
    double weight;                              // 体重
    char sex;                                   // 性别
    bool cool;                                  // 帅不帅
};

void func(st_boy *p)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "score[" << i << "][" << j << "]=" << p->score[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    st_boy boy;
    func(&boy);
    system("pause");
}