#include <iostream>
using namespace std;

// void func(int *arr,int len)
void func(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "arr[" << i << "]的值是：" << arr[i] << endl;       // 用数组表示法操作指针。
        cout << "*(arr+" << i << ")的值是：" << *(arr + i) << endl; // 地址[下标]  解释为  *(地址+下标)。
    }
}

int main()
{
    int a[] = {2, 8, 4, 6, 7, 1, 9};

    func(a, sizeof(a) / sizeof(int));
    system("pause");
}