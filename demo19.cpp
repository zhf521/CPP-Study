#include <iostream>

using namespace std;

int compasc(const void *p1, const void *p2) // 回调函数，从小到大排列
{

    return *((int *)p1) - *((int *)p2); // 此处需要将void类型指针强制类型转换为int类型
}

int compdesc(const void *p1, const void *p2) // 回调函数，从大到小排列
{

    return *((int *)p2) - *((int *)p1); // 此处需要将void类型指针强制类型转换为int类型
}

int main()
{
    int a[8] = {4, 2, 7, 5, 8, 6, 1, 3};
    cout << "从小到大排列为：\n";
    // 函数原型：void qsort(void *base,size_t nmemb,size_t size,int (*compar)(const void*,const void*));
    qsort(a, sizeof(a) / sizeof(int), sizeof(int), compasc);
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        cout << a[i] << endl;
    }
    cout << "从大到小排列为：\n";
    // 函数原型：void qsort(void *base,size_t nmemb,size_t size,int (*compar)(const void*,const void*));
    qsort(a, sizeof(a) / sizeof(int), sizeof(int), compdesc);
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        cout << a[i] << endl;
    }
    system("pause");
}