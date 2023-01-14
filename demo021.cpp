#include <iostream>

using namespace std;

void func(int p[][3], int len)
{
    for (int i = 0; i < len; i++) // 访问数组行
    {
        for (int j = 0; j < 3; j++) // 访问数组列
        {
            cout << "p[" << i << "][" << j << "]=" << p[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int ID[2][3] = {{11, 12, 13}, {21, 22, 23}};
    func(ID, 2);
    system("pause");
}