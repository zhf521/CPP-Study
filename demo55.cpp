#include <iostream>
using namespace std;

void *operator new(size_t size) // 参数必须是size_t（unsigned long long）,返回值必须是void*
{
    cout << "调用了重载的new：" << size << "字节。\n";
    void *ptr = malloc(size); // 申请内存
    cout << "申请到的内存地址是：" << ptr << endl;
    return ptr;
}

void operator delete(void *ptr) // 参数必须是void*,返回值必须是void
{
    cout << "调用了重载的delete。\n";
    if (ptr == 0) // 对空指针delete是安全的
        return;
    free(ptr); // 释放内存
}

int main()
{
    int *p1 = new int(3);
    cout << "p1=" << (void *)p1 << ",*p1=" << *p1 << endl;
    delete p1;
    system("pause");
}