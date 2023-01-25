#include <iostream>
using namespace std;
// 交换函数模板
template <class T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
// 实现通用的对数组进行排序的函数
template <class T>
void mySort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = i; // 认定最大值的下标
        for (int j = i + 1; j < len; j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }
        if (max != i)
        {
            mySwap(arr[max], arr[i]);
        }
    }
}
template <class T>
void printArray(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void test01()
{
    char charArr[] = "badcfe";
    int num = sizeof(charArr) / sizeof(char);
    mySort(charArr, num);
    printArray(charArr, num);
}
int main()
{
    test01();
    system("pause");
    return 0;
}