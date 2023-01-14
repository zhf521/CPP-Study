#include <iostream>
using namespace std;

// 在arr中查找key，成功返回key在arr中的数组下标，失败返回-1
int search(int arr[], int len, int key)
{
    int low = 0, high = len - 1, mid; // 初始化：low=0，high=数组长度-1

    while (low <= high)
    {
        mid = (low + high) / 2; // 计算mid的位置

        if (arr[mid] == key)
            return mid; // 查找成功
        else if (arr[mid] > key)
            high = mid - 1; // 继续在前半区查找
        else
            low = mid + 1; // 继续在后半区查找
    }

    return -1; // 查找失败
}

int main()
{
    int a[10] = {7, 9, 12, 16, 21, 25, 30, 35, 41, 48}; // 必须是已排好序的数组

    if (search(a, 10, 30) >= 0)
        cout << "在数组a中查找30成功。\n";
    else
        cout << "在数组a中查找30失败。\n";
    system("pause");
}
