#include <iostream>

using namespace std;

int main()
{
    int *arr = new int[8]; // 创建8个元素的整型数组

    for (int i = 0; i < 8; i++)
    {
        arr[i] = 100 + i;                                  // 数组表示法
        cout << "arr[" << i << "]=" << *(arr + i) << endl; // 指针表示法
    }
    delete[] arr;
    system("pause");
}