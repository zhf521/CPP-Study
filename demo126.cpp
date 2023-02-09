#include <iostream>
#include <list>
using namespace std;
void printList(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
// list容器大小操作
void test()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printList(l1);
    // 判断容器是否为空
    if (l1.empty())
    {
        cout << "L1为空" << endl;
    }
    else
    {
        cout << "L1不为空" << endl;
        cout << "L1的元素个数为:" << l1.size() << endl;
    }
    l1.resize(10);
    printList(l1);
    l1.resize(15, 100);
    printList(l1);
    l1.resize(2);
    printList(l1);
}
int main()
{
    test();
    system("pause");
    return 0;
}