#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
void printDeque(deque<int> &d)
{
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
// deque容器排序
void test()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    printDeque(d);
    sort(d.begin(), d.end()); // 默认升序,对于支持随机访问的迭代器，都可以使用sort算法对其进行排序
    printDeque(d);
}
int main()
{
    test();
    system("pause");
    return 0;
}